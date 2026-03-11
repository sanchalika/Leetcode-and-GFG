/*
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}
*/

class Solution {
    Node reverseList(Node head) {
        // code here
        Node prev=null;
        Node curr=head;
        if(head==null || head.next==null){
            return head;
        }
        while(curr!=null){
            Node newNode=curr.next;
            curr.next=prev;
            prev=curr;
            curr=newNode;
        }
        return prev;
    }
}