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
     int max_diameter = 0;
public:
    int height(TreeNode* root){
      if(root == nullptr) return 0;
      int leftHeight = height(root->left);
      int rightHeight = height(root->right);
      max_diameter = max(max_diameter, leftHeight + rightHeight);
      return 1 + max(leftHeight, rightHeight);

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {

        height(root);
        return max_diameter;
        }
};