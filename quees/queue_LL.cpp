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
class Queue{
  public:
  int size=0;
  Node* start;
  Node* end;
  Queue(){
    start=nullptr;
    end=nullptr;
  }
  void push(int val){
    Node* temp= new Node(val);
    if(start==nullptr){ start=temp;
    end=temp;}
    else{
      end->next=temp;
      end=temp;
    }
    size++;
    cout <<"Start : "<<start->next<<endl;
  }
  void pop(){
    if(start==nullptr){
      cout<<"Queue is already empty";
    }
    Node* temp=start;
    start=start->next;
    delete temp;
    size--;
  }
  int top(){
    if(start==nullptr){
       cout<<"Queue is already empty";
    }
    return start->data;
  }
};
int main(){
  Queue q1;
  q1.push(2);
  q1.push(4);
  q1.push(5);
  q1.push(2);
  cout<<"TOP Value :"<<q1.top()<<endl;
  q1.pop();
  q1.pop();
  cout<<"Top Value :"<<q1.top()<<endl;

  return 0;
}