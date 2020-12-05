#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        
        return max(maxDepth(root->right, 0), maxDepth(root->left, 0)) + 1;
    }
    
    int maxDepth(TreeNode* root, int depth){
        if(!root) return 0;
        
        return max(maxDepth(root->right, depth), maxDepth(root->left, depth)) + 1;
    }
};


int main(){
    TreeNode* node1 = new TreeNode(5);
    TreeNode* node2 = new TreeNode(15);
    TreeNode* node3 = new TreeNode(7);
    TreeNode* node4 = new TreeNode(20, node2, node3);
    TreeNode* node5 = new TreeNode(3, node1, node4);

    Solution* sol = new Solution();
    cout << sol->maxDepth(node4);


    return 0;
}