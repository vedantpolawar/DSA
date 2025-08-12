#include<bits/stdc++.h>
using namespace std;
int  fibbonachi(int n){
  if(n==0||n==1){
    return 1;
  }
  return fibbonachi(n-1)+fibbonachi(n-2);
}
int main(){
  int n;
  cin>>n;
  cout<<fibbonachi(n);
  return 0;
}