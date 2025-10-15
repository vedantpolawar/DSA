#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data, Node* next = nullptr) {
        this->data = data;
        this->next = next;
    }

    // static function so we can call it without an object
    static Node* convertArr2LL(const vector<int>& arr) {
        if (arr.empty()) return nullptr;

        Node* head = new Node(arr[0]);
        Node* mover = head;

        for (int i = 1; i < arr.size(); i++) {
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }

        return head;
    }
    
};
int lengthOfLL(Node* head){
      int cnt=0;
      Node* temp=head;
      while(temp){
        cnt++;
      }
      return cnt;
    }
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node* head = Node::convertArr2LL(arr); // call static function
    Node* temp = head;

    // print linked list
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<head;
    cout<<lengthOfLL(head);
    return 0;
}
