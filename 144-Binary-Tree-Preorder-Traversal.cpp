class Solution {
public:

    void preorder(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }

        // Root
        arr.push_back(root->val);

        // Left
        preorder(root->left, arr);

        // Right
        preorder(root->right, arr);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;

        preorder(root, arr);

        return arr;
    }
};