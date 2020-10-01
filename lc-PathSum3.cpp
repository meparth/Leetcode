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
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return subPathSum(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
    
    int subPathSum(TreeNode* root, int sum){
        if(!root) return 0;
        int curr = 0;
        if(sum==root->val) curr = 1;
        
        return curr + subPathSum(root->left, sum-root->val) + subPathSum(root->right, sum-root->val); 
    }
};

int main(){
    

    return 0;
}