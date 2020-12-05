#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if(nums.size() <= 1) return nums;
        
        int pivot = nums.size() / 2;
        vector<int> left(nums.begin(), nums.begin() + pivot);
        vector<int> right(nums.begin() + pivot, nums.end());
        
        left = sortArray(left);
        right = sortArray(right);
        
        return merge(left, right);      
    }
    
    vector<int> merge(vector<int>& left, vector<int>& right){
        vector<int> ret;
        
        int li=0;
        int ri=0;
        
        while(li < left.size() && ri < right.size()){
            if(left[li] < right[ri]) ret.push_back(left[li++]);
            else ret.push_back(right[ri++]);
        }
        
        while(li < left.size()){
            ret.push_back(left[li++]);
        }
        
        while(ri < right.size()){
            ret.push_back(right[ri++]);
        }
        
        return ret;
        
    }
};

int main(){
    

    return 0;
}