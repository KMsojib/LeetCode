/*
# Problem          : 155. Min Stack
# Time Complexity  : 
# C++ Solution
*/
class MinStack {
private:
    std::stack<int> mainStack;
    std::stack<int> minStack;

public:
    MinStack() {}

    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (!mainStack.empty()) {
            if (mainStack.top() == minStack.top()) {
                minStack.pop();
            }
            mainStack.pop();
        }
    }

    int top() {
        return mainStack.empty() ? INT_MIN : mainStack.top();
    }

    int getMin() {
        return minStack.empty() ? INT_MIN : minStack.top();
    }
};