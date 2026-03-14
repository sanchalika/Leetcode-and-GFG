/*
class Node{
    int data;
    Node next, prev;
    Node(int x){
        this.data = x;
        this.next = null;
        this.prev = null;
    }
}
*/
class Solution {
    Node removeDuplicates(Node head) {
        // Code Here.
        Node temp=head;
        if(head==null || head.next==null){
            return head;
        }
        while(temp!=null && temp.next!=null){
            if(temp.data==temp.next.data){
                Node duplicate=temp.next;
                temp.next=duplicate.next;
                if(duplicate.next!=null){
                    duplicate.next.prev=temp;
                }
            }else{
                temp=temp.next;
            }
        }
        return head;
    }
}