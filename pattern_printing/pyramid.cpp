#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<=n;i++){
    for(int j=i;j<=n-1;j++){
      cout<<" ";
    }
    for(int k=1;k<=2*i+1;k++){
      cout<<k;
    }
    cout<<endl;
  }
  return 0;
}