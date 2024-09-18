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
   
    TreeNode* pruneTree(TreeNode* root) {
        if(root == NULL) return NULL;
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if(root->left == NULL && root->right== NULL && root->val ==0) return NULL;

        return root;
    }
};