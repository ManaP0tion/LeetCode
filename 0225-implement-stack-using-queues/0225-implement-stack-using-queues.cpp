class MyStack {
public:
    deque<int> q;       // 덱을 이용한 풀이
    MyStack() {
        
    }
    
    void push(int x) {
        q.push_back(x);
    }
    
    int pop() {
        int num = q.back();
        q.pop_back();
        return num;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        if(q.empty())
            return true;
        return false;
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