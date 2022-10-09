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
    void inorder(TreeNode *root, unordered_set<int> &st, int k, bool &flag)
    {
    if(root == NULL)
        return ;
    inorder(root->left,st,k,flag);
    if(st.find(k-root->val) != st.end())
    {
        flag = true;
        return;
    }
    else
        st.insert(root->val);
    inorder(root->right,st,k,flag);
}

bool findTarget(TreeNode* root, int k) {
    unordered_set<int> st;
    bool flag = false;
    inorder(root,st,k,flag);
    return flag;
}
};