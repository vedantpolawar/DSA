#include<iostream>
using namespace std;
void print(int i,int n){
  if(i==n){
    return;
  }
  cout<<n;
  i++;
  print(i,n);
}
int main(){
  int n;
  cin>>n;
  print(0,n);
  return 0;
}