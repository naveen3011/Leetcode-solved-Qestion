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
	void helper(TreeNode* &root, int val , int depth){
		if(root == NULL)
			return;
		if(depth   == 1){
			TreeNode* ltemp = root->left;
			root->left = new TreeNode(val);
			root->left->left = ltemp;
			ltemp = root->right;
			root->right = new TreeNode(val);
			root->right->right = ltemp;
		}
		else{
			helper(root->left, val, depth-1);
			helper(root->right , val , depth -1 );
		}
	}
	TreeNode* addOneRow(TreeNode* root, int val, int depth) {
		if(depth == 1){
			TreeNode* temp = new TreeNode(val);
			temp->left = root;
			return temp;
		}
		helper(root,val,depth -1);
		return root;

	}
};