// #include<iostream>
// using namespace std;
// void add(int i,int sum){
//   if(i<1){
//     cout<<sum;
//     return;
//   }
//   add(i-1,sum+i);
// }
// int main(){
//   int n;
//   cin>>n;
//   add(n,0);
//   return 0;
// }
#include<iostream>
using namespace std;
int add(int n){
  if(n==0){
    return 0;
  }
  return n+add(n-1);
}
int main(){
  int n;
  cin>>n;
  cout<<add(n);
  return 0;
}