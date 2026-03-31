#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
private:
    stack<int> s;
    stack<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        s.push(val);
        if(minStack.empty())
            minStack.push(val);
        else
            minStack.push(min(val, minStack.top()));
    }
    
    void pop() {
        s.pop();
        minStack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};