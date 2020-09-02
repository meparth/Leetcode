#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& T) {
    int n = T.size();
    vector<int> nextHot(n, 0);       
    stack<int> stok;
    int count;
    for(int i=n-1 ; i>=0 ; i--){
        count = 1;
        while(!stok.empty() && stok.top()<=T[i]){
            stok.pop();
            count+=nextHot[i+count];
        }
        if(stok.empty()) count = 0;
        stok.push(T[i]);
        nextHot[i] = count;
    }
    return nextHot;
}

int main(){
    vector<int>T{73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> res = dailyTemperatures(T);
    for(int i=0 ; i<res.size() ; i++)
        cout << res[i] << endl;
    return 0;
}