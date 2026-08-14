class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root){
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }
        stack<TreeNode*> s;
        s.push(root);
        int size = s.size();
        while(!s.empty()){
            TreeNode* node = s.top();
            s.pop();
             if(node -> right != nullptr)
                s.push(node->right);
            
            ans.push_back(node -> val);
            if(node -> left != nullptr)
                s.push(node->left);
           
        }
         return ans;
    }
   
};