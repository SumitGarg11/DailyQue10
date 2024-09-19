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
    bool inorder(TreeNode* root, int sum, int &targetSum){
        if(root == NULL) return false;
        sum+=root->val;
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum) return true;
            return false;
        }
        bool left = inorder(root->left, sum, targetSum);
        bool right = inorder(root->right, sum, targetSum);
        return left || right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = inorder(root, sum, targetSum);
        return ans;
    }
};