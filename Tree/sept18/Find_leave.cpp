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

class Solution{
    public:
    map<int,vector<int>> mpp;
    int collectNodewithHeight(TreeNode* root){
        if(root == NULL) return;
        int lh = collectNodewithHeight(root->left);
        int rh = collectNodewithHeight(root->right);
        int H = 1+max(lh,rh);
        mpp[H].push_back(root->val);
        return H;

    }

    vector<vector<int>>findLeaves(TreeNode* root){
        vector<vector<int>> ans;
        collectNodewithHeight(root);
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
int main(){
    
}