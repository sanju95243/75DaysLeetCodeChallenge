#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> inputStack;
    stack<int> outputStack;

    MyQueue() {}

    void push(int x) {
        inputStack.push(x);
    }

    int pop() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        int val = outputStack.top();
        outputStack.pop();
        return val;
    }

    int peek() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        return outputStack.top();
    }

    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};