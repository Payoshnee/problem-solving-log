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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){ 
        return true;
        }
            return check(root->left,root->right);
    }
    bool check(TreeNode* LeftNode, TreeNode* RightNode){
        if(LeftNode == nullptr && RightNode == nullptr){
            return true;
        }
        if(LeftNode == nullptr || RightNode == nullptr){
            return false;
        }
        if(LeftNode->val != RightNode->val){
            return false;
        }
        return check(LeftNode-> right , RightNode-> left) && check(LeftNode->left, RightNode->right);
    }

};