#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
    stack<int> st1;  // stack for enqueue (push)
    stack<int> st2;  // stack for dequeue (pop, front)

    // ✅ Push operation: just push to st1 (O(1))
    void toPush(int val) {
        st1.push(val);
    }

    // ✅ Pop operation: O(1) amortized
    void toPop() {
        if (st2.empty()) {
            // If st2 is empty, move all elements from st1 to st2
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }

        if (st2.empty()) {
            cout << "Queue is empty, cannot pop.\n";
            return;
        }

        st2.pop();  // Remove the front element
    }

    // ✅ Get the front element of the queue
    int getFront() {
        if (st2.empty()) {
            // Move elements if st2 is empty
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }

        if (st2.empty()) {
            cout << "Queue is empty, no front element.\n";
            return -1;
        }

        return st2.top();  // Top of st2 is the front of the queue
    }

    // ✅ Check if the queue is empty
    bool isEmpty() {
        return st1.empty() && st2.empty();
    }
};

int main() {
    Queue q;

    // --- PUSH OPERATIONS ---
    q.toPush(10);
    q.toPush(20);
    q.toPush(30);
    cout << "Front after pushing 10, 20, 30: " << q.getFront() << "\n";  // Expected: 10

    // --- POP OPERATION ---
    q.toPop(); // removes 10
    cout << "Front after popping once: " << q.getFront() << "\n";        // Expected: 20

    // --- MORE PUSH ---
    q.toPush(40);
    q.toPush(50);
    cout << "Front should still be 20 after pushing 40, 50: " << q.getFront() << "\n"; // Expected: 20

    // --- MULTIPLE POPS ---
    q.toPop(); // removes 20
    cout << "Front after popping: " << q.getFront() << "\n";            // Expected: 30

    q.toPop(); // removes 30
    cout << "Front after popping: " << q.getFront() << "\n";            // Expected: 40

    q.toPop(); // removes 40
    cout << "Front after popping: " << q.getFront() << "\n";            // Expected: 50

    q.toPop(); // removes 50
    cout << "Trying to get front of empty queue:\n";
    cout << q.getFront() << "\n"; // Expected: "Queue is empty" message and -1

    return 0;
}
