#include<bits/stdc++.h>
using namespace std;

int traverse(vector<int>& nums, long long S, int n){
    // n -> current element
    // S -> need to make

    if(S == 0 && n == nums.size()) return 1;
    if(n == nums.size()) return 0;
    
    return traverse(nums, S-nums[n], n+1) + traverse(nums, S+nums[n], n+1);
}


int findTargetSumWays(vector<int>& nums, int S) {
    int ways = traverse(nums, S, 0);
    return ways;
}

int main(){
    vector<int>nums = {2,107,109,113,127,131,137,3,2,3,5,7,11,13,17,19,23,29,47,53};


    int S = 2147483647;
    cout << findTargetSumWays(nums, S);

    return 0;
}