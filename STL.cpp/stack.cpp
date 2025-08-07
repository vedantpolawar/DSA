// stack is based on LIFO
#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(1);//{1}
  st.push(2);//{2,1}
  st.push(3);//{3,2,1}
  st.emplace(4);//{4,3,2,1}
  cout<<st.top();//prints 4 "**st[1] is not valid. no indexing";
  st.pop();//{3,2,1};
  cout<<st.top();
  cout<<st.size();
  cout<<st.empty();//0  for empty 1 for non empty
  stack<int>st1,st2;
  st1.swap(st2);
  return 0;
}
//only this much operations are allowed so if stack is there it's timecomplexity is O(1);