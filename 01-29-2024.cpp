// 232. Implement Queue using Stacks
// https://leetcode.com/problems/implement-queue-using-stacks/

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
private: 
    stack<int> s;
public:
    MyQueue() {}
    // Push element x to the back of queue.
    void push(int x) {
        pushHelper(x);
    }
    void pushHelper(int x){
        if(s.empty()){
            s.push(x);
            return;
        }
        int data;
        data = s.top();
        s.pop();
        pushHelper(x);
        s.push(data);
        return;
        
    }

    // Removes the element from in front of queue.
    int pop() {
        int x = s.top();
        s.pop();
        return x;
    }

    // Get the front element.
    int peek() {
        return s.top();
    }

    // Return whether the queue is empty.
    bool empty() {
        return (s.empty());
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

int main () {
  
   return 0;
}