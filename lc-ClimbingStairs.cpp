#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    Solution() : store(50, -1) {};
    vector<int> store;
    
    int climbStairs(int n) {
        if(n == 0) return 1;
        if(n < 0) return 0;
        
        if(store[n] != -1) return store[n];
        
        store[n] = climbStairs(n-1) + climbStairs(n-2);
        return store[n];
    }
    
    
};

int main(){
    

    return 0;
}