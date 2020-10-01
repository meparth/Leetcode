#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        int dp[21] = {0};
        
        dp[0] = dp[1] = 1;
        
        for(int level = 2 ; level<=n ; level++){
            for(int root = 1 ; root<=level ; root++){   
                dp[level] += dp[root-1] * dp[level-root];
            }
        }
        
        return dp[n];
    }
};

int main(){
    
    return 0;
}