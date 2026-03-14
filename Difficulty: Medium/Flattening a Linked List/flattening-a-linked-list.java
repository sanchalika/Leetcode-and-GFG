/*
class Node {
    int data;
    Node next;
    Node bottom;

    Node(int x) {
        data = x;
        next = null;
        bottom = null;
    }
}
*/
class Solution {
    public Node flatten(Node root) {
        // code here
        if(root==null || root.next==null){
            return root;
        }
        Node mergeHead=flatten(root.next);
        return merge(root, mergeHead);
    }
    public Node merge(Node l1, Node l2){
        Node dummyNode=new Node(-1);
        Node res=dummyNode;
        while(l1!=null && l2!=null){
            if(l1.data<l2.data){
                res.bottom=l1;
                res=l1;
                l1=l1.bottom;
            }
            else{
                res.bottom=l2;
                res=l2;
                l2=l2.bottom;
            }
            res.next=null;
        }
        if(l1!=null) res.bottom=l1;
        else res.bottom=l2;
        return dummyNode.bottom;
    }
}