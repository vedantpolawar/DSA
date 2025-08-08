#include<iostream>
#include<set>
using namespace std;
int main(){
  //everything is same as set
  //only stores duplicate elements also
  multiset<int>ms;
  ms.insert(1);//{1}
  ms.insert(1);//{1,1}
  ms.emplace(1);
  for(auto it=ms.begin();it!=ms.end();it++){
    cout<<*(it);
  }
  ms.erase(1);//all 1's erased
  int cnt =ms.count(1);
  //only a single one erased 
  ms.erase(ms.find(1));//points to first occurence of 1
  ms.erase(ms.find(1),ms.find(1)+2);
  return 0;
}