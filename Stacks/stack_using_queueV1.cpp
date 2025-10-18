#include <bits/stdc++.h>
using namespace std;

class st {
    queue<int> q;

public:
    // Push element on top of stack
    void pushTo(int val) {
        q.push(val);
        // Rotate the queue to make last inserted element front
        for (int i = 1; i < q.size(); i++) {
            q.push(q.front());
            q.pop();
        }
    }

    // Pop the top element
    void popS() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q.pop();
    }

    // Get the top element
    int Gettop() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    // Check if stack is empty
    bool empty() {
        return q.empty();
    }
};

int main() {
    st s1;
    s1.pushTo(4);
    s1.pushTo(10);
    s1.pushTo(7);

    cout << "Top: " << s1.Gettop() << endl;  // should print 7

    s1.popS();
    cout << "Top after pop: " << s1.Gettop() << endl;  // should print 10

    s1.popS();
    s1.popS();
    s1.popS(); // stack empty now

    return 0;
}
