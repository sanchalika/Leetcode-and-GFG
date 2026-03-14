1/*
2// Definition for a Node.
3class Node {
4    int val;
5    Node next;
6    Node random;
7
8    public Node(int val) {
9        this.val = val;
10        this.next = null;
11        this.random = null;
12    }
13}
14*/
15
16class Solution {
17    public void insertCopyNodeInBet(Node head) {
18        Node temp = head;
19        while (temp != null) {
20            Node copyNode = new Node(temp.val);
21            copyNode.next = temp.next;
22            temp.next = copyNode;
23            temp = temp.next.next;
24        }
25    }
26
27    public void connectRandomPointers(Node head) {
28        Node temp = head;
29        while (temp != null) {
30            Node copyNode = temp.next;
31            if (temp.random != null) {
32                copyNode.random = temp.random.next;
33            }
34            temp = temp.next.next;
35        }
36    }
37
38    public Node connectNextPOinters(Node head) {
39        Node dummyNode = new Node(-1);
40        Node res = dummyNode;
41        Node temp = head;
42        while (temp != null) {
43            res.next = temp.next;
44            temp.next = temp.next.next;
45            res = res.next;
46            temp = temp.next;
47        }
48        return dummyNode.next;
49    }
50
51    public Node copyRandomList(Node head) {
52        insertCopyNodeInBet(head);
53        connectRandomPointers(head);
54        return connectNextPOinters(head);
55    }
56}