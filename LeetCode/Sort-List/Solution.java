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
12    public ListNode sortList(ListNode head) {
13        if(head==null || head.next==null){
14            return head;
15        }
16        ListNode middle=findMiddle(head);
17        ListNode leftHead=head;
18        ListNode rightHead=middle.next;
19        middle.next=null;
20        leftHead=sortList(leftHead);
21        rightHead=sortList(rightHead);
22        return mergeTwoLists(leftHead, rightHead);
23    }
24
25    public ListNode findMiddle(ListNode head){
26        ListNode slow=head;
27        ListNode fast=head.next;
28        while(fast!=null && fast.next!=null){
29            slow=slow.next;
30            fast=fast.next.next;
31        }
32        return slow;
33    }
34
35    public ListNode mergeTwoLists(ListNode head1, ListNode head2) {
36        if (head1 == null) {
37            return head2;
38        }
39        if (head2 == null) {
40            return head1;
41        }
42        if (head1 == null && head2 == null) {
43            return null;
44        }
45        ListNode dummy = new ListNode(0);
46        ListNode tail = dummy;
47        ListNode curr1 = head1;
48        ListNode curr2 = head2;
49        while (curr1 != null && curr2 != null) {
50            if (curr1.val <= curr2.val) {
51                tail.next = curr1;
52                curr1 = curr1.next;
53            } else {
54                tail.next = curr2;
55                curr2 = curr2.next;
56            }
57            tail = tail.next;
58        }
59        if (curr1 != null) {
60            tail.next = curr1;
61        }
62        if (curr2 != null) {
63            tail.next = curr2;
64        }
65        return dummy.next;
66    }
67}