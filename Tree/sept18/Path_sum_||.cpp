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
    vector<vector<int>> ans;

    void fill (TreeNode* root, int sum, vector<int> temp, int &targetSum){
        if(root==NULL) return;
        sum += root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum ==  targetSum){
                ans.push_back(temp);
            }
            return ;
        }
        fill(root->left,sum,temp, targetSum);
        fill(root->right,sum,temp, targetSum);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        vector<int> temp;
        fill(root, sum, temp, targetSum);
        return ans;   
    }
};