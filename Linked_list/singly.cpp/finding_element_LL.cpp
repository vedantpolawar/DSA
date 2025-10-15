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
int checkIfValueEixst(Node* head,int value){
  Node* Temp=head;
  while (Temp){
    if(Temp->data==value){
      return 1;
    }
    Temp=Temp->next;
  }
    return 0;
}
Node* convertArr2LL(vector<int> arr){
  if(arr.empty()) return nullptr;
  Node* head=new Node(arr[0]);
  Node* mover =head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}
int main(){
  vector<int> arr={1,2,3,4,5,6};
  Node* head=convertArr2LL(arr);
  int value;
  cout<<"Enter the value ou need to check :";
  cin>>value;
  if(checkIfValueEixst(head,value)==1){
    cout<<value<<" exists in linkedlist";
  }else{
    cout<<"Nice try diddy";
  };
  return 0;
}