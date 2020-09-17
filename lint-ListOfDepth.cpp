#include<bits/stdc++.h>
using namespace std;

/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param root the root of binary tree
     * @return a lists of linked list
     */
    
    ListNode* getDepthListNode(vector<int>v){
        if(v.size()==0) return NULL;
        ListNode* root = new ListNode(v[0]);
        ListNode* temp = root;
        for(int i=1 ; i<v.size() ; i++){
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        return root;
    } 
    
    vector<ListNode*> binaryTreeToLists(TreeNode* root) {
        // Write your code here
        vector<ListNode*> depthLists; // returnable
        if(root==NULL) return depthLists;
        int currDepth = 0;
        
        ListNode* currListNode;
        vector<int> currListVec;
        
        unordered_map<TreeNode*, int> depth;
        depth[root] = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr==NULL) continue;
            TreeNode* left =  curr->left;
            TreeNode* right = curr->right;
            if(currDepth == depth[curr])
                currListVec.push_back(curr->val);
            else{
                // wrap up the last depth elements
                depthLists.push_back(getDepthListNode(currListVec));
                
                currListVec.clear();
                currListVec.push_back(curr->val);
                currDepth++;
            }
            depth[left] = depth[right] = currDepth + 1;
            q.push(left);
            q.push(right);
            
            
        }
        depthLists.push_back(getDepthListNode(currListVec));
        
        return depthLists;      
        
    }
};

int main(){
    

    return 0;
}