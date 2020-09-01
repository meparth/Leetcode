#include <bits/stdc++.h>
using namespace std;

int numSquares(int n){
    if(n<2) return n;

    vector<int> steps(n+1, 0);
    queue<int> nums;
    nums.push(n);
    while(!nums.empty()){
        int curr = nums.front();
        nums.pop();
        
        for(int i=1 ; i*i<=curr ; i++){
            int next = curr - i*i;
            if(next==0) return steps[curr]+1;
            if(steps[next]) continue;
            
            nums.push(next);
            steps[next] = steps[curr] + 1;
        }
    }
    return 0;


}

int main()
{
    int n=13;
    // cin >> n;
    cout << numSquares(n);
}