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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        if(nums.size()==1) return new TreeNode(nums[0]);
        
        int indMid = nums.size()/2;
        TreeNode* currRoot = new TreeNode(nums[indMid]);
        
        vector<int> left = vector<int>(nums.begin(), nums.begin()+indMid);
        vector<int> right = vector<int>(nums.begin()+indMid+1, nums.end());
        
        currRoot->left = sortedArrayToBST(left);
        currRoot->right = sortedArrayToBST(right);
        return currRoot;
    }
};

int main(){
    
    return 0;
}