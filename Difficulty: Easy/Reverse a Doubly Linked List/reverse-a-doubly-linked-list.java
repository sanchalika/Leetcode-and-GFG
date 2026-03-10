/*
class Node {
    int data;
    Node next;
    Node prev;

    Node(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}
*/
class Solution {
    public Node reverse(Node head) {
        // code here
        Node curr=head;
        Node last=null;
        while(curr!=null){
            last=curr.prev;
            curr.prev=curr.next;
            curr.next=last;
            curr=curr.prev;
        }
        if(last!=null){
            head=last.prev;
        }
        return head;
    }
}