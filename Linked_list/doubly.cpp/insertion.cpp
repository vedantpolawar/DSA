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
Node* insertHead(Node* head,int val){
Node* newNode = new Node(val, head, NULL);
    if (head != NULL)
        head->back = newNode;
    return newNode;}
Node* insertEnd(Node* head,int val){
  Node* newNode= new Node(val);
  if (head == NULL) {
        return newNode;
    }
  Node* temp =head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newNode;
  newNode->back=temp;
  return head;
}
Node* insertK(Node* head, int k, int val) {
    Node* newNode = new Node(val);

    // Case 1: Empty list
    if (head == NULL) {
        return newNode;
    }

    // Case 2: Insert at head (k == 0)
    if (k == 0) {
        newNode->next = head;
        head->back = newNode;
        return newNode;
    }

    Node* temp = head;
    int cnt = 0;

    // Move to (k-1)th node or stop if end reached
    while (temp->next != NULL && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    // Case 3: Insert at end (k >= length)
    if (temp->next == NULL) {
        temp->next = newNode;
        newNode->back = temp;
        return head;
    }

    // Case 4: Insert in the middle
    Node* front = temp->next;
    newNode->next = front;
    newNode->back = temp;
    temp->next = newNode;
    front->back = newNode;

    return head;
}

int main(){
  vector<int>arr={1,2,3,4,5};
  Node* head=convertArr2DLL(arr);
  int val;
  cout<<"Enter the element You wanna insert : ";
  cin>>val;
  int k;
  cout<<"Enter the index you wanna add element : ";
  cin>>k;

 head=insertK(head,k,val);
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"   "<<temp->next<<"  "<<temp->back<<endl;
    temp=temp->next;
  }
  return 0;
}
