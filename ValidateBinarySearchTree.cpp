Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 
Example 1:
Input: root = [2,1,3]
Output: true
  
Example 2:
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 
 ||==============================>Solution<==============================||

 Approch: 01 Brut Force
 
 class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        int leftMax = maxLeft(root->left);
        int rightMin = minRight(root->right);
        if(leftMax > root->val || rightMin < root->val) return false;
        
        bool left = isValidBST(root->left);
        bool right = isValidBST(root -> right);
        
        if(left == true && right == true) return true;
        else return false;
       if(!root) return true;
   }
    int maxLeft(TreeNode* root){
        while(root->left != NULL){
            root = root->left;}
        return root->val;
    }
    int minRight(TreeNode* root){
        while(root -> right != NULL){
            root = root->right;
        }
        return root->val;
    }

};

Approch: 02 Optimized

class Solution {
public:
    bool recurse(TreeNode* node, long long lower, long long upper){
        if(!node) return true;
        
        if(node->val <= lower) return false;
        if(node->val >= upper) return false;
        
        if(!recurse(node->left, lower, node->val)) return false;
        if(!recurse(node->right, node->val, upper)) return false;
        
        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        // cout << LLONG_MIN << endl;
        // cout << LLONG_MAX << endl;
        return recurse(root, LLONG_MIN, LLONG_MAX);
    }
};
