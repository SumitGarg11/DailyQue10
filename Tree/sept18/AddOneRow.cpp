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
    TreeNode* add(TreeNode* root, int val, int depth,int curr){
        if(root == NULL) return NULL;
        if(curr == depth - 1){
            TreeNode* prevLeftN = root->left;
            TreeNode* prevRightN = root->right;
            root->left = new TreeNode(val);
            root->right = new TreeNode(val);
            root->left->left = prevLeftN;
            root->right->right = prevRightN;
            return root;
        }
        root->left = add(root->left, val,depth, curr+1);
        root->right = add(root->right,val, depth,curr+1);
        return root;

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        return add(root,val,depth,1);
    }
};