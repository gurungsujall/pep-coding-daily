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
    bool identical(TreeNode* root1,TreeNode * sub){
        if(root1==NULL and sub==NULL){
            return true;
        }
        if(root1==NULL or sub==NULL){
            return false;
        }
        if(root1->val !=sub->val){
            return false;
        }
        return identical(root1->left,sub->left) and identical(root1->right,sub->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL and subRoot==NULL){
            return root==subRoot;
        }
        if(root==NULL or subRoot==NULL){
            return false;
        }
        if(identical(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
        
    }
};