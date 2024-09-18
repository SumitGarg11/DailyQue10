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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return{};
        queue<TreeNode*> q;
        TreeNode* node = NULL;
        vector<int> ans;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            while(n--){
                node=q.front();
                q.pop();
                if(node->left!=NULL)
                  q.push(node->left);
                if(node->right!=NULL)
                   q.push(node->right);

            }
            ans.push_back(node->val);
        }
        return ans;
    }
};
  
// Time Complexity (T.C.): O(n)
// Space Complexity (S.C.): O(n)  