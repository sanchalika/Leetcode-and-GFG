/*
class Node
{
    int data;
    Node next;
    Node prev;
    Node(int data)
    {
        this.data = data;
        next = prev = null;
    }
}
*/

class Solution {
    Node insertAtPos(Node head, int p, int x) {
        // code here
        Node newNode=new Node(x);
        if(head==null){
            return newNode;
        }
        Node curr=head;
        for(int i=0; curr!=null && i<p; i++){
            curr=curr.next;
        }
        Node nextNode = curr.next;
        curr.next=newNode;
        newNode.prev=curr;
        newNode.next=nextNode;
        if(nextNode!=null){
            nextNode.prev=newNode;
        }
        
        return head;
    }
}