#include <bits/stdc++.h>
using namespace std;

class queue_Arr {
public:
    int size = 4;
    int qee[4];
    int start = -1, end = -1;
    int cur_size = 0;

    void push(int x) {
        if (cur_size >= size) {
            cout << "Queue is full !!\n";
            return;
        }

        if (cur_size == 0) {
            start = end = 0;
        } else {
            end = (end + 1) % size;
        }

        qee[end] = x;
        cur_size++;
    }

    int pop() {
        if (cur_size == 0) {
            cout << "Queue is Empty\n";
            return -1;
        }

        int el = qee[start];

        if (cur_size == 1) {
            start = end = -1;
        } else {
            start = (start + 1) % size;
        }

        cur_size--;
        return el;
    }

    int top() {
        if (cur_size == 0) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return qee[start];
    }

    void print() {
        if (cur_size == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        int i = start;
        for (int count = 0; count < cur_size; count++) {
            cout << qee[i] << " ";
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    queue_Arr q1;
    q1.push(6);
    q1.push(10);
    q1.print();     // Output: 6 10
    q1.pop();
    q1.print();     // Output: 10
    cout << "Front element: " << q1.top() << endl;
}
