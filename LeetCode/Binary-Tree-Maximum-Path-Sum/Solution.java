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
17    public int maxPathSum(TreeNode root) {
18        int maxVal[] = new int[1];
19        maxVal[0] = Integer.MIN_VALUE;
20        maxPathHelper(root, maxVal);
21        return maxVal[0];
22    }
23
24    private int maxPathHelper(TreeNode root, int maxVal[]) {
25        if (root == null)
26            return 0;
27        int leftH = Math.max(0, maxPathHelper(root.left, maxVal));
28        int rightH = Math.max(0, maxPathHelper(root.right, maxVal));
29        maxVal[0] = Math.max(root.val + leftH + rightH, maxVal[0]);
30        return root.val + Math.max(leftH, rightH);
31    }
32}