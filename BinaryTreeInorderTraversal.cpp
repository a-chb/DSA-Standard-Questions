Given the root of a binary tree, return the inorder traversal of its nodes' values.

Example 1:
Input: root = [1,null,2,3]
Output: [1,3,2]

Example 2:
Input: root = []
Output: []

Example 3:
Input: root = [1]
Output: [1]

||===========================================>Solution<=============================================||

Approch: 01 Iterrative Solution using Stack
  
  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
  Memory Usage: 8.4 MB, less than 75.15% of C++ online submissions for Binary Tree Inorder Traversal.
    
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> todo;
        while (root || !todo.empty()) {
            while (root) {
                todo.push(root);
                root = root -> left;
            }
            root = todo.top();
            todo.pop();
            nodes.push_back(root -> val);
            root = root -> right;
        }
        return nodes;
    }
};

Approch: 02 Recursive Solution

class Solution {
public:
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL){
            return {};
        }
        
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
        
        return result;
      
    }
};
