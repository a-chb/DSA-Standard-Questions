Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
A leaf is a node with no children.
 
Example 1:
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.
 
Example 2:
Input: root = [1,2,3], targetSum = 5
Output: false
Explanation: There two root-to-leaf paths in the tree:
(1 --> 2): The sum is 3.
(1 --> 3): The sum is 4.
There is no root-to-leaf path with sum = 5.
 
Example 3:
Input: root = [], targetSum = 0
Output: false
Explanation: Since the tree is empty, there are no root-to-leaf paths.

||=============================================>Solution<=============================================||

    Runtime: 20 ms, faster than 41.70% of C++ online submissions for Path Sum.
    Memory Usage: 21.3 MB, less than 74.07% of C++ online submissions for Path Sum.
        
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;                                         
        targetSum = targetSum-root->val;                                             
        if(targetSum==0 && !root->left && !root->right)return true;              
        return hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum);
    }
};
