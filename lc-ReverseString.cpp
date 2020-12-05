#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseString(s, 0, s.size()-1);
    }
    
    void reverseString(vector<char>& s, int start, int end){
        if(start >= end) return; // == ret
        
        int temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        reverseString(s, start+1, end-1);
        
    }
};

int main(){
    

    return 0;
}