#include <bits/stdc++.h>
using namespace std;
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

   TreeNode* build(vector<int>& preorder,int preS,int preE, vector<int>&  
   
    inorder , int inS, int inE, map<int,int> &mpp){
        if(preS > preE || inS > inE) return NULL;
        TreeNode* root = new TreeNode(preorder[preS]);
        int inRoot = mpp[root->val];
        int numsLeft = inRoot-inS;
        root->left =  build(preorder,preS+1, preS+numsLeft,   inorder,inS,inRoot -1, mpp);
        root->right = build(preorder, preS+numsLeft+1,preE,   inorder,inRoot+1,inE, mpp);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mpp;
        for(int i =0; i<inorder.size(); i++){
            mpp[inorder[i]] = i;
        }
        TreeNode* root = build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1, mpp);

        return root;
    }

};

// Time Complexity (T.C.): O(n)
// Space Complexity (S.C.): O(n)