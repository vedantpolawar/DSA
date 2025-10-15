#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a=1;
    int b=i+1;
    for(int j=0;j<i+1;j++){
      cout<<a;
      a++;
    }
    for(int k=0;k<2*n-(2*i+1);k++){
      cout<<" ";
    }
    for(int j=0;j<i+1;j++){
      cout<<b;
      b--;
    }
    cout<<endl;
  }
  return 0;
}