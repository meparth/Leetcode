#include<bits/stdc++.h>
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
class Solution {
public:
    vector<int> traversed;
    void traverse(TreeNode* root){
        if(root==NULL) return;
        traverse(root->left);
        traverse(root->right);
        traversed.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        traverse(root);
        return traversed;
    }
};

int main(){
    

    return 0;
}