#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    Solution() : store(40, -1) {};
    vector<int> store;
    
    int fib(int N)
    {
        if (N <= 1)
            return N;
        if (store[N] != -1)
            return store[N];

        store[N] = fib(N - 1) + fib(N - 2);
        return store[N];
    }
    
    
    
//     int fib(int N) {
//         for(int i=0 ; i<=30 ; i++){
//             store.push_back(-1);
//         }
//         return fib(N, true);
//     }
//     int fib(int N, bool secondary) {
//         if(N <= 1) return N;
//         if(store[N] != -1) return store[N];
        
//         return store[N] = fib(N-2, secondary) + fib(N-1, secondary);
//     }
    
    
};


int main()
{
    
    return 0;
}