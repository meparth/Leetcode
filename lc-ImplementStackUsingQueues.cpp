#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> s;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        s.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int top() {
         int n = s.size();
        int temp;
        for(int i=0 ; i<n ; i++){
            temp = s.front();
            s.pop();
            // if(i==n-1) break;
            s.push(temp);
        }
        return temp;       
    }
    
    /** Get the top element. */
    int pop() {
        int n = s.size();
        int temp;
        for(int i=0 ; i<n ; i++){
            temp = s.front();
            s.pop();
            if(i==n-1) break;
            s.push(temp);
        }
        return temp;        
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return s.empty();
    }
    
 
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


int main(){
    

    return 0;
}