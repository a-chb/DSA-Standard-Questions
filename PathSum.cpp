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
