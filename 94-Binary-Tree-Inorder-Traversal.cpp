class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        helper(root, arr);
        return arr;
    }
    void helper(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }
        helper(root->left, arr);
        arr.push_back(root->val);
        helper(root->right, arr);
    }
};