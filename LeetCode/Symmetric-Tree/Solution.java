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
17    public boolean isSymmetric(TreeNode root) {
18        if (root == null)
19            return true;
20        return helper(root.left, root.right);
21    }
22
23    private boolean helper(TreeNode root1, TreeNode root2){
24        if(root1==null && root2==null) return true;
25        if(root1==null || root2==null) return false;
26        return (root1.val==root2.val && 
27                helper(root1.left, root2.right) &&
28                helper(root1.right, root2.left));
29    }
30}