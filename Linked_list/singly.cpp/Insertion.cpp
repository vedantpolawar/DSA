#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node* next;
  Node(int data,Node* next=NULL){
    this->data=data;
    this->next=next;
  }
};
Node* convert2LL(vector<int>arr){
  if (arr.empty()) return NULL;
  Node* head= new Node(arr[0]);
  Node* mover= head;
  for(int i=1;i<arr.size();i++){
    Node * temp=new Node(arr[i]);
    mover->next=temp;
    mover=temp;
  }
  return head;
}
Node* insertAthead(Node* head,int val){
  Node * temp =new Node(val,head);
  return head;
}
Node* insertAtK(Node* head,int val,int k){
    Node* ToBe=new Node(val);
    Node* temp= head;
    if(head==NULL) return ToBe;
    if(k==0){
        Node* temp =new Node(val,head);
        return temp;
    }
    for(int i=1;i<k;i++){
        temp=temp->next;
    }
    ToBe->next=temp->next;
    temp->next=ToBe;
    return head;
    
}
Node* insertAtKdiff(Node* head, int val, int k) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        return newNode;
    }
    if (k == 0) {
        newNode->next = head;
        return newNode;
    }
    Node* temp = head;
    Node* prev = NULL;
    int cnt = 0;
    while (temp != NULL) {
        if (cnt == k) {
            prev->next = newNode;
            newNode->next = temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }

    prev->next = newNode;
    return head;
}

Node* insertAtEnd(Node* head,int val){
  Node* ToBe= new Node(val);
  Node* temp=head;
  if(head==NULL) return ToBe;
  while(temp!=NULL){
    temp=temp->next;
  }
  temp->next=ToBe;
  return head;
}
int main(){
 vector<int> arr={1,23,4,53,5};
 int val;
 cout<<"Enter The value to be entered :";
 cin>>val;
 Node* head= convert2LL(arr);
//  head=insertAthead(head,val);
head=insertAtEnd(head,val);
  Node* temp =head;
 while(temp){
  cout<<temp->data;
  temp=temp->next;
 } 
return 0;
}