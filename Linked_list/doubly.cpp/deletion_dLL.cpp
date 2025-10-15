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
Node* deleteHead(Node* head){
  if(head==nullptr||head->next==NULL) return nullptr;                          
  Node* prev=head;
  (head->next)->back=NULL;
  head=head->next;
  prev->next=nullptr;
  delete(prev);
  return head;
}
Node* deleteEnd(Node* head){
    if(head==nullptr||head->next==NULL) return nullptr;                          
  //my approach
  // Node* prev= head;
  // while(prev->next->next!=NULL){
  //   prev=prev->next;
  // }
  // prev->next->back=nullptr;
  // prev->next=nullptr;
  // return head;
  //striver
  Node* tail=head;
  while(tail->next!=nullptr){
    tail=tail->next;
  }
  Node* prev=tail->back;
  prev->next=nullptr;
  tail->back=nullptr;
  delete tail;
  return head;                           
}
Node* deleteKth(Node*head,int k){
      if(head==nullptr||head->next==NULL) return nullptr;                          

  Node* temp=head;
  int cnt=0;
  while(temp!=nullptr){
    cnt++;
    if(cnt==k){
      break;
    }
    temp=temp->next; 
  }
  Node* prev=temp->back;
  Node* front=temp->next;
  if(prev==NULL && front==NULL){
    delete temp;
    return nullptr;
  }
  else if(prev==nullptr){
    deleteHead(head);
  }else if(front==nullptr){
    deleteEnd(head);
  }else{
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    free(temp);
   return head;
  }
}
int main(){
  vector<int>arr={1,2,3,4,5};
  Node* head=convertArr2DLL(arr);
  int k;
  cout<<"Enter the index to be Deleted";
  cin>>k;

  head=deleteKth(head,k);
  Node* temp=head;

  while(temp!=NULL){
    cout<<temp->data<<"   "<<temp->next<<"  "<<temp->back<<endl;
    temp=temp->next;
  }
  return 0;
}