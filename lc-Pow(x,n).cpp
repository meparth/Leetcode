#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        
        if(n == INT_MIN) n+=2;
        
        if(n < 0){
            x = 1/x;
            n = -n;
        }
        
        
        if(n%2 == 0) return myPow(x*x, n/2);
        return x*myPow(x*x, n/2);
    }
    
};

int main(){
    

    return 0;
}