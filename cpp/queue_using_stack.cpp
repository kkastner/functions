class Queue {
public:
    stack<int> inputStack, outputStack;
    // Push element x to the back of queue.
    void push(int x) {
        inputStack.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        peek();
        outputStack.pop();
    }

    // Get the front element.
    int peek(void) {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        return outputStack.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return (inputStack.empty() && outputStack.empty());
    }
};