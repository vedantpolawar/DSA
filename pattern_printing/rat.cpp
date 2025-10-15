#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    //  int a=1;
    for(int j=0;j<i+1;j++){
      cout<<"*";
      // cout<<a;
      // a++;
    }
    cout<<endl;
  }
  return 0;
}
