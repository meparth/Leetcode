#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthGrammar(int N, int K) {
        if(N==1) return K==1 ? 0 : 1;
        
        int half = 1 << (N-1);
        
        if(K <= half) return kthGrammar(N-1, K);
        return kthGrammar(N-1, K-half) == 0 ? 1 : 0;
    }
    
    
    
    /* tle
    int kthGrammar(int N, int K) {
        vector<int> vec;
        vec.push_back(0);
        int len = 1<<N;
        for(int i=0 ; vec.size()<=len ; i++){
            cout << vec[i];
            if(vec[i]==0){
                if(i>0) vec.push_back(0);
                vec.push_back(1);
            }else{
                vec.push_back(1);
                vec.push_back(0);
            }
        }
        
        return vec[K-1];
    }
    */
};

int main(){
    

    return 0;
}