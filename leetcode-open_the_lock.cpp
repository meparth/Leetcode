#include <bits/stdc++.h>
using namespace std;



int openLock(vector<string> &deadends, string target)
{
    string lock = "0000";
    unordered_map<string,bool> deads;
    for(int i=0 ; i<deadends.size() ; i++) deads[deadends[i]] = true;
    if(deads[lock]) return -1;

    int turns = 0;
    unordered_map<string,int> steps;
    
    queue<string> q;
    q.push(lock);
    steps[lock] = 0;
    while(!q.empty()){
        string curr = q.front();
        q.pop();
        if(curr==target) return steps[target];

        string next, prev;

        for(int i=0 ; i<4 ; i++){
            next = curr;
            prev = curr;
            
            if(curr[i]=='9') next[i] = '0';
            else ++next[i];
            if(curr[i]=='0') prev[i] = '9';
            else --prev[i];

            // cout << next << " " << prev << endl;

            if(!deads[next] && steps[next]==0){
                steps[next] = steps[curr]+1;
                q.push(next);
            }
            if(!deads[prev] && steps[prev]==0){
                steps[prev] = steps[curr]+1;
                q.push(prev);
            }   
        }
    }
    return -1   ;
}

int main()
{
    vector<string> deadlocks;
    deadlocks.push_back("8888");
    // deadlocks.push_back("0101");
    // deadlocks.push_back("0102");
    // deadlocks.push_back("1212");
    // deadlocks.push_back("2002");

    cout << openLock(deadlocks, "0009") << endl;

        return 0;
}