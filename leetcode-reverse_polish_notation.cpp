#include<bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& tokens) {
    int a=0, b=0, result=0;
    stack<int> store;

    for(int i=0 ; i<tokens.size() ; i++){
        int digitLen = tokens[i].length();
        if(isdigit(tokens[i][digitLen-1])){
            store.push(stoi(tokens[i]));
            // cout << stoi(tokens[i]) << "--\n";
            continue;
        }

        b = store.top();
        store.pop();
        a = store.top();
        store.pop();

        if(tokens[i]=="+"){
            result = a + b;
        }else if (tokens[i]=="-"){
            result = a - b;
        }else if (tokens[i]=="/"){
            result = (int) a / b;
        }else if (tokens[i]=="*"){
            result = a * b;
        }
        // cout << "--" << result << "--" << endl;
        store.push(result);
    }
    return store.top();
}

int main(){
    vector<string> tokens{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << evalRPN(tokens) << endl;
   

    return 0;
}