1class Solution {
2    private void markParents(TreeNode root, Map<TreeNode, TreeNode> markParent) {
3        Queue<TreeNode> q = new LinkedList<>();
4        q.offer(root);
5        while (!q.isEmpty()) {
6            TreeNode node = q.poll();
7            if (node.left != null) {
8                markParent.put(node.left, node);
9                q.offer(node.left);
10            }
11            if (node.right != null) {
12                markParent.put(node.right, node);
13                q.offer(node.right);
14            }
15        }
16    }
17
18    private TreeNode findStartNode(TreeNode root, int start) {
19        if (root == null)
20            return null;
21        if (root.val == start)
22            return root;
23        TreeNode left = findStartNode(root.left, start);
24        if (left != null)
25            return left;
26        return findStartNode(root.right, start);
27    }
28
29    public int amountOfTime(TreeNode root, int start) {
30        if (root == null)
31            return 0;
32        Map<TreeNode, TreeNode> markParent = new HashMap<>();
33        markParents(root, markParent);
34        TreeNode startNode = findStartNode(root, start);
35        Queue<TreeNode> queue = new LinkedList<>();
36        Map<TreeNode, Boolean> visited = new HashMap<>();
37        int time = 0;
38        queue.offer(startNode);
39        visited.put(startNode, true);
40        while (!queue.isEmpty()) {
41            int size = queue.size();
42            for (int i = 0; i < size; i++) {
43                TreeNode curr = queue.poll();
44                if (curr.left != null && visited.get(curr.left) == null) {
45                    queue.offer(curr.left);
46                    visited.put(curr.left, true);
47                }
48                if (curr.right != null && visited.get(curr.right) == null) {
49                    queue.offer(curr.right);
50                    visited.put(curr.right, true);
51                }
52                if (markParent.get(curr) != null && visited.get(markParent.get(curr)) == null) {
53                    queue.offer(markParent.get(curr));
54                    visited.put(markParent.get(curr), true);
55                }
56            }
57            if (!queue.isEmpty()) {
58                time++;
59            }
60        }
61        return time;
62    }
63}