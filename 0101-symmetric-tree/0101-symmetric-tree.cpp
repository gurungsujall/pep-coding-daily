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
    bool symm(TreeNode* lr,TreeNode* rr){
        if(lr==NULL && rr==NULL){
            return true;
        }
        if(lr==NULL or rr==NULL){
            return false;
        }
        if(lr->val != rr->val){
            return false;
        }
        return symm(lr->left,rr->right) && symm(lr->right,rr->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return symm(root->left,root->right);
    }
};