Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: 3

Example 2:
Input: root = [1,null,2]
Output: 2

||========================================================>Solution<======================================================================||

Runtime: 17 ms, faster than 36.94% of C++ online submissions for Maximum Depth of Binary Tree.
Memory Usage: 18.8 MB, less than 89.27% of C++ online submissions for Maximum Depth of Binary Tree.
  
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
};
  
