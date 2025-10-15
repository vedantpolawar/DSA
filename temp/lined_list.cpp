#include<bits/stdc++.h>
using namespace std;
class  Node
{public:
  int data;
  Node *next;
  Node(int data,Node* next=nullptr){
    this->data=data;
    this->next=next;
  }
};
Node* convert2LL(vector<int>arr){
  Node* head=new Node(arr[0]);
  Node* mover=head;
  for(int i=1;i<arr.size();i++){
    Node* temp= new Node(arr[i]);
    mover->next=temp;
    delete temp;
  }
  return head;
}
int main(){
  vector<int> arr={1,23,43,51,5}
  return 0;
}