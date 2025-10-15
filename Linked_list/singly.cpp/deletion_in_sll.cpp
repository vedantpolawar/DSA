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
Node* deleteHead(Node* head){
  Node* temp=head;
  head=head->next;
  delete temp;
  return head;
}
Node* deleteEnd(Node* head){
  Node * temp =head;
  if (head==nullptr|| head->next==nullptr){
    return nullptr;
  }
  while(temp->next->next!=nullptr){
    temp= temp->next;
  }
  delete temp->next;
  temp->next=nullptr;
  return head;
}
// my approach
// Node* deleteK(Node* head,int k){
//   if(head==nullptr){return nullptr;};
//   if(k==1){
//     Node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;
//   }
//   Node* temp = head;
//   for(int i=1;i<k-1;i++){
//     temp = temp->next;
//   }
//   if (temp == nullptr || temp->next == nullptr) {
//         return head;
//     }
//   Node* nodeToDelete=temp->next;
//   temp->next=nodeToDelete->next;
//   delete nodeToDelete;
//   return head;  
// }
Node* deleteK(Node* head,int k){
  if(head=NULL) return head;
  if(k==1){
    Node* temp =head;
    head=head->next ;
    delete temp;
    return head;
  }
  int cnt=0;
  Node* temp =head;
  Node * prev= NULL;
  while(temp!=NULL){
    cnt++;
    if(cnt==k){
      prev->next=prev->next->next;
      delete temp;
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
}
Node* deleteByValue(Node* head,int el){
  if(head==NULL) return head;
  if(head->data==el){
    Node* temp =head;
    head=head->next ;
    delete temp;
    return head;
  }
  Node* temp =head;
  Node * prev= NULL;
  while(temp!=NULL){
    if(temp->data==el){
      prev->next=prev->next->next;
      delete temp;
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
}
int main(){
  vector<int >arr={1,2,3,4,5,6342};
  Node* head=convertArr2LL(arr);
  // head=deleteHead(head);
  // head=deleteEnd(head);
  // int k;
  // cout<<"Enter element k :";
  // cin>>k;
  // head=deleteK(head,k);
  int el;
  cout<<"Enter value :";
  cin>>el;
  head=deleteByValue(head,el);
  cout<<head<<endl;
  Node* temp=head; 
  while(temp){
    cout<<temp->data;
    temp=temp->next;
  }
  return 0;
}
