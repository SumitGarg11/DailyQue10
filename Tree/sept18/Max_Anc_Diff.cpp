#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(){
        this->val= 0;
        this->left=NULL;
        this->right= NULL;
    }
    TreeNode(int val){
        this->val= val;
        this->left=NULL;
        this->right= NULL;
    }
};

class Solution {
public:
    int maxDiff;
    void findMaxDiffAC(TreeNode* root, TreeNode* child){
        if(root == NULL || child == NULL) return ;
        maxDiff = max(maxDiff, abs(root->val - child->val));
        findMaxDiffAC(root, child->left);
        findMaxDiffAC(root,child->right);
    }
    void findMaxDiff(TreeNode* root){
        if(root == NULL) return;
        findMaxDiffAC(root, root->);
        findMaxDiffAC(root, root->right);

        findMaxDiff(root->left);
        findMaxDiff(root->right);
      
    }
    int maxAncestorDiff(TreeNode* root) {
        maxDiff = -1;
        findMaxDiff(root);
        return maxDiff;

    }
};