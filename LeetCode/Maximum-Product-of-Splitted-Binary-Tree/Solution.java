1/**
2 * Definition for a binary tree node.
3 * public class TreeNode {
4 *     int val;
5 *     TreeNode left;
6 *     TreeNode right;
7 *     TreeNode() {}
8 *     TreeNode(int val) { this.val = val; }
9 *     TreeNode(int val, TreeNode left, TreeNode right) {
10 *         this.val = val;
11 *         this.left = left;
12 *         this.right = right;
13 *     }
14 * }
15 */
16class Solution {
17    long MOD = 1000000007L;
18    long ans = 0;
19
20    private long dfs(TreeNode node) {
21        if (node == null) return 0;
22
23        node.val += dfs(node.left) + dfs(node.right);
24        return node.val;
25    }
26
27    public int maxProduct(TreeNode root) {
28        long total = dfs(root);
29
30        Queue<TreeNode> q = new LinkedList<>();
31        q.add(root);
32
33        while (!q.isEmpty()) {
34            TreeNode node = q.poll();
35            if (node == null) continue;
36
37            long cur = (total - node.val) * node.val;
38            ans = Math.max(ans, cur);
39
40            if (node.left != null) q.add(node.left);
41            if (node.right != null) q.add(node.right);
42        }
43
44        return (int)(ans % MOD);
45    }
46}