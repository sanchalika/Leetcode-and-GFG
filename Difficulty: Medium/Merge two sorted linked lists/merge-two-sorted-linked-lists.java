/*
class Node
{
    int data;
    Node next;
    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class Solution {
    Node sortedMerge(Node head1, Node head2) {
        if(head1==null){
            return head2;
        }
        if(head2==null){
            return head1;
        }
        if(head1==null && head2==null){
            return null;
        }
        Node dummy=new Node(0);
        Node tail=dummy;
        Node curr1=head1;
        Node curr2=head2;
        while(curr1!=null && curr2!=null){
            if(curr1.data<=curr2.data){
                tail.next=curr1;
                curr1=curr1.next;
            }
            else{
                tail.next=curr2;
                curr2=curr2.next;
            }
            tail=tail.next;
        }
        if(curr1!=null){
            tail.next=curr1;
        }
        if(curr2!=null){
            tail.next=curr2;
        }
        return dummy.next;
    }
}