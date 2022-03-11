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

    ListNode* rotateRight(ListNode* head, int k) {
        // if head is null or head next is null 
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // calculating length and taking mod of k with n
        ListNode * temp = head;
        int length =0;
        while(temp!= NULL){
            temp = temp->next;
            length++;
        }
        if ( k%length == 0){
            return head;
        }
        int n ;
        n = k%length;
        
        
        
        ListNode* temp1 = head;
        ListNode * temp2 = head;
        
        
        
        for(int i = 1 ; i < (length-n) ; i++){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1->next != NULL){
            temp1 = temp1->next;
            
        }
        temp1->next = head;
        head = temp2->next;
        temp2->next = NULL;
        
        return head;
    }
};