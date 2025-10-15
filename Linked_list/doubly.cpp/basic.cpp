#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node* back;
  
  Node(int data,Node*next=NULL,Node* back=NULL){
    this->data=data;
    this->next=next;
    this->back=back;
  }
};
Node* convertArr2DLL(vector<int>&arr){
   if (arr.empty()) return NULL; 
  Node* head=new Node(arr[0]);
  Node* prev=head;
  for(int i=1;i<arr.size();i++){

    Node* temp=new Node(arr[i],NULL,prev);
    prev->next=temp;
    prev=prev->next;
  }
  return head;
}
int main(){
  vector<int>arr={1,2,3,4,5};
  Node* head=convertArr2DLL(arr);
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"   "<<temp->next<<"  "<<temp->back<<endl;
    temp=temp->next;
  }
  return 0;
}