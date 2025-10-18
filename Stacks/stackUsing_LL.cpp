 #include<bits/stdc++.h>
 using namespace std;
 class Node{
  public:
  int data;
  Node* next;
  Node(int data,Node* next=nullptr){
    this->data=data;
    this->next=next;
  }
 };
 class Stack{
  public:
  int size=0;
  Node* top;
  Stack(){
    top=nullptr;
  }
  void push(int x){
    Node* temp=new Node(x);
    temp->next=top;
    top=temp;
    size=size+1;
  }
  int pop(){
    if(top==NULL){
      cout<<"Stack is empty\n";
      return -1;
    }
    Node* temp= top;
    int el=temp->data;
    top=top->next;
    delete temp;
    size=size-1;
    return el;
  }
  int getTop(){
    if (top == nullptr) {
        cout << "Stack is empty\n";
        return -1;
    }
    return top->data;
  }
  int getSize(){
    return size;
  }
 };
 int main(){
   Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.getTop() << endl;   // 20
    cout << "Popped: " << s.pop() << endl;          // 20
    cout << "Top after pop: " << s.getTop() << endl; // 10
    cout << "Size: " << s.getSize() << endl;
  return 0;
 }