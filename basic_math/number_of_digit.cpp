#include<iostream>
#include<utility>
using namespace std;
//remember time complexity here is O(log10(n)) as we are dividing number by 10

int main(){
  int n;
  cin>>n;
  int cnt=0;
  while(n>0){
    int cnt=int(log10(n)+1);
  }
  cout<<cnt;
  return 0;
}