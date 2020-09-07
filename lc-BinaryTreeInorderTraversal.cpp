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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> traverseOrder;
        if(root==NULL) return traverseOrder;
        
        stack<TreeNode*> pile;
        TreeNode* curr = root;
        
        while(!pile.empty() || curr!=NULL){
            while(curr!=NULL){
                pile.push(curr);
                curr = curr->left;
            }
            curr = pile.top();
            pile.pop();
            traverseOrder.push_back(curr->val);
            curr = curr->right;
        }
        
        
        
        
        return traverseOrder;
    }
};

int main(){
    

    return 0;
}