1/**
2 * Definition for singly-linked list.
3 * public class ListNode {
4 *     int val;
5 *     ListNode next;
6 *     ListNode() {}
7 *     ListNode(int val) { this.val = val; }
8 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
9 * }
10 */
11class Solution {
12    public ListNode reverseList(ListNode head) {
13        if(head==null || head.next==null){
14            return head;
15        }
16        ListNode prev = null;
17        ListNode curr = head;
18        while(curr!=null){
19            ListNode next=curr.next;
20            curr.next=prev;
21            prev=curr;
22            curr=next;
23        }
24        return prev;
25    }
26}