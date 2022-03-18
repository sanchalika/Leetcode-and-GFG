/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* dummy = new ListNode(0,head);
    ListNode* prev = NULL;
    ListNode* curr = dummy->next;
    ListNode* temp = dummy; // to cover case where left = first node of list
    ListNode* nxt;

    // going to the left node
    for(int i=1; i<left; ++i){
        temp = curr;
        curr = curr->next;
    }
    
    // reversing the list from left to right 
    for(int i=1; i<=right-left+1; ++i){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    
    // reconnecting the reversed list to main list 
    temp->next->next = curr;  // order imp
    temp->next = prev;        // @@
    return dummy->next;
}
};