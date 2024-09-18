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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool past = false;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            
            if(node == NULL){
                past = true;
            }
            else{
                if(past == true){
                    return false;
                }
                q.push(node->left);
                q.push(node->right);
            }
        }
        return true;
    }
};

// T.C O(N)
// S.C O(N);