class MyQueue {
public:
    stack<int> s1,s2; // implementing through two stacks
    void push(int x) {
        while(!s1.empty()){ // till s1 not empty take all elements of s1 and put it into s2
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
         while(!s2.empty()){ // till s2 not empty take all elements of s2 and put it into s1
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        if(s1.empty()) return -1;
        int ans= s1.top();
        s1.pop();
        return ans;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */