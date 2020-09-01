#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    /** initialize your data structure here. */
    vector<int> stack;
    unordered_map<int, int> minTill;
    MinStack()
    {
    }

    void push(int x)
    {
        stack.push_back(x);
        if(stack.size()==1){
            minTill[stack.size()-1] = x;
        }else{
            minTill[stack.size() - 1] = min(x, minTill[stack.size() - 2]);
        }
    }

    void pop()
    {
        if(stack.size()<1) return;
        stack.pop_back();
    }

    int top()
    {
        int len = stack.size();
        if(len < 1) return 0;
        return stack[len-1];
    }

    int getMin()
    {
        int len = stack.size();
        if(len < 1) return 0;
        return minTill[len-1];
    }
};

int main()
{
    MinStack* obj = new MinStack();
    obj->push(5);
    cout << "top: " << obj->top() << endl;
    obj->push(4);
    obj->push(3);
    obj->push(2);
    cout << "top: " << obj->top() << endl;
    obj->pop();
    cout << "top: " << obj->top() << endl;
    
    return 0;
}