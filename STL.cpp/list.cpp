#include<iostream>
#include<list>//list gives front operations also 
using namespace std;
int main(){
  list<int> ls;
  ls.push_back(2);//{2}
  ls.emplace_back(4);//{2,4}
  ls.push_front(5);//{5,2,4}
  ls.emplace_front();
  return 0;
}
//rest functions same as vector 
//begin,end,rebegin,rend,clear,insert,size,swap