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
    void fun(TreeNode* root, int level, vector<int> &ans){
        if(root == NULL) return;
        if(ans.size() == level){
            ans.push_back(root->val);
        }
        fun(root->right,level+1,ans);
        fun(root->left, level+1,ans);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        fun(root,0,ans);
        return ans;
    }
};