/*
class Node{
    int data;
    Node next;

    Node(int x){
        data = x;
        next = null;
    }
}
*/

class Solution {
    public Node addOne(Node head) {
        int carry=1;
        head=reverse(head);
        Node temp=head;
        while(temp!=null){
            temp.data=temp.data+carry;
            if(temp.data<10){
                carry=0;
                break;
            }
            else{
                temp.data=0;
                carry=1;
            }
            temp=temp.next;
        }
        if(carry==1){
            Node newNode=new Node(1);
            head=reverse(head);
            newNode.next=head;
            return newNode;
        }
        head=reverse(head);
        return head;
    }
    public Node reverse(Node head){
        Node curr=head;
        Node prev=null;
        while(curr!=null){
            Node front=curr.next;
            curr.next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
}