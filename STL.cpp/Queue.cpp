// based on FIFO principal
#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<int>q;
  q.push(1);//{1}
  q.push(2);//{1,2}
  q.emplace(3);//{1,2,4};
 
  q.back()+=5;//jaise stack mai top waise queue mai back hota.
  cout<<q.back();//prints 9
  //0 is {1,2,9}
  cout<<q.front();//print 1
  q.pop();//{2,9}

  return 0;
}