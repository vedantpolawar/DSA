#include<iostream>
using namespace std;
void print(int i,int n){
  if(i>n){
    return;
  }
    // cout<<i; // to print from 1 to n;

  print(i+1,n);
    cout<<i;//to print from n to 1

}
int main(){
  int n;
  cin>>n;
  print(1,n);
  return 0;
}