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
    bool isSame(TreeNode* lr, TreeNode* rr){
        if(lr==NULL && rr==NULL){
            return true;
        }
        if(lr==NULL or rr==NULL){
            return false;
        }
        if(lr->val != rr->val){
            return false;
        }
        return isSame(lr->left,rr->left) && isSame(lr->right,rr->right);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL){
            return true;
        }
        if(p==NULL or q==NULL){
            return false;
        }
        if(p->val != q->val){
            return false;
        }
        return isSame(p->left,q->left) && isSame(p->right,q->right);
    }
};