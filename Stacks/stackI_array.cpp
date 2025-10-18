#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int topIndex = -1;
    int st[10];

    void push(int x) {
        if (topIndex >= 9) {
            cout << "You have exceeded size of array\n";
            return;
        }
        topIndex++;
        st[topIndex] = x;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack is already Empty\n";
            return;
        }
        topIndex--;
    }

    int getTop() {
        if (topIndex == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return st[topIndex];
    }

    void print() {
        if (topIndex == -1) {
            cout << "Stack is Empty\n";
            return;
        }
        for (int i = 0; i <= topIndex; i++) {
            cout << st[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s1;
    s1.push(6);
    s1.push(10);
    s1.push(15);

    cout << "Stack elements: ";
    s1.print();

    cout << "Top element: " << s1.getTop() << endl;

    s1.pop();
    cout << "After pop: ";
    s1.print();

    return 0;
}
