||-------------------------------------------->Solution<--------------------------------------------||

  Solved in O(N) time and O(1) space as required in question.
  Using Morris Traversal.
  
  Runtime: 7 ms, faster than 6.36% of C++ online submissions for Flatten Binary Tree to Linked List.
  Memory Usage: 12.5 MB, less than 96.54% of C++ online submissions for Flatten Binary Tree to Linked List.
  
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr = root;
        
        while(curr!=NULL){
            if(curr->left){
               TreeNode* pred = curr->left;
                while(pred->right){
                    pred = pred->right;
                }
                pred->right = curr->right;
                curr->right = curr->left; 
                curr->left = NULL;
            }
            curr = curr->right;
        }

    }
};

```
