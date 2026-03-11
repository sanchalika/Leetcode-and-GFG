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
12    public ListNode oddEvenList(ListNode head) {
13        if(head==null){
14            return head;
15        }
16        ListNode odd=head;
17        ListNode even=odd.next;
18        ListNode evenHead=even;
19        while(even!=null && even.next!=null){
20            odd.next=even.next;
21            odd=odd.next;
22            even.next=odd.next;
23            even=even.next;
24        }
25        odd.next=evenHead;
26        return head;
27    }
28}