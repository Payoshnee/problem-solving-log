class Solution {
public:
void inorderTraversal(TreeNode* root, vector<int>& arr) {
    if(root == nullptr){
        return;
    }
        inorderTraversal(root->left, arr);

        arr.push_back(root->val);

        inorderTraversal(root->right, arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;

        inorderTraversal(root, arr);
        return arr[k-1];
    }
};