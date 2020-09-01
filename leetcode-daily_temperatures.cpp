#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& T) {
    unordered_map<int, int> lastTemp;
    vector<int> nextHot(T.size(), INT_MAX);
    
    
    for(int i=T.size()-1 ; i>=0 ; i--){
        for(int j=T[i]+1 ; j<=100 ; j++){
            if(lastTemp[j]>0){
                nextHot[i] = min(nextHot[i], lastTemp[j]-i);
            }
        }
        if(nextHot[i]==INT_MAX) nextHot[i] = 0;
        lastTemp[T[i]] = i;
    }
    for(int i=30 ; i<=100 ; i++)
        cout << lastTemp[i] << " ";
    cout << endl;
    
    return nextHot;
}


int main()
{
    vector<int> T{73, 74, 75, 71, 69, 72, 76, 73} ;
    vector<int> nextTemp = dailyTemperatures(T);
    for(int i=0 ; i<nextTemp.size() ; i++){
        cout << nextTemp[i] << " ";
    }
    return 0;
}