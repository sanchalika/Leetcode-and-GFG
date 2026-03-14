/* Structure of Doubly Linked List
class Node
{
    int data;
    Node next;
    Node prev;
}*/
class Solution {
    static Node deleteAllOccurOfX(Node head, int x) {
        // code here
        Node temp=head;
        while(temp!=null){
            if(temp.data==x){
                if(temp==head){
                    head=head.next;
                }
                Node nextNode=temp.next;
                Node prevNode=temp.prev;
                if(nextNode!=null){
                    nextNode.prev=prevNode;
                }
                if(prevNode!=null){
                    prevNode.next=nextNode;
                }
                temp=temp.next;
            }else{
                temp=temp.next;
            }
        }
        return head;
    }
}