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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> traversed;        
        stack<TreeNode*> pile;
        TreeNode* curr = root;
        pile.push(root);
        
        while(!pile.empty()){
            curr = pile.top();
            pile.pop();
            if(curr==NULL) continue;

            traversed.push_back(curr->val);
            pile.push(curr->left);
            pile.push(curr->right);
            
        }
        reverse(traversed.begin(), traversed.end());
        return traversed;
        
    }
};

int main(){
    

    return 0;
}