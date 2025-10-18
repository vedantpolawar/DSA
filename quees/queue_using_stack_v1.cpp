#include<bits/stdc++.h>
using namespace std;
// To push an element into a queue using 2 stacks:

// Move everything from st1 to st2.

// Push the new element to st1.

// Move everything back from st2 to st1
//dont use for loop we are doing extra iteration
class Queue{
public:
  stack<int>st1;
  stack<int>st2;
  void toPush(int val){
    int n=st1.size();
    while(st1.size()!=0){
      st2.push(st1.top());
      st1.pop();
    }
    st1.push(val);
    while(st2.size()){
      st1.push(st2.top());
      st2.pop();
    }
  }
  void toPop(){
    st1.pop();
  }
  int getFront(){
    
    return st1.top();
  }
};
int main(){
  Queue q1;
  q1.toPush(6);
  q1.toPush(8);
  q1.toPush(2);
  cout<<q1.getFront();
  q1.toPop();
  cout<<q1.getFront();

  return 0;
}