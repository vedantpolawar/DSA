#include<iostream>
using namespace std;
int letters(int n){
  if (n==0){
   return  1;
  }
  return n*letters(n-1);
}
int main(){
  int out=letters(5);
  cout<<out;
  return 0;
}