/*
Structure of node class is:
class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}
*/

class Solution {
    public Node insertInMiddle(Node head, int x) {
        // Code here
        Node newNode=new Node(x);
        if(head==null){
            return newNode;
        }
        int cnt=0;
        Node curr=head;
        while(curr!=null){
            cnt++;
            curr=curr.next;
        }
        int mid=(cnt%2)==0?(cnt/2):(cnt+1)/2;
        curr=head;
        for(int i=1; i<mid; i++){
            curr=curr.next;
        }
        newNode.next=curr.next;
        curr.next=newNode;
        return head;
    }
}