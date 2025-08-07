#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a=1;
    for(int j=i;j<n;j++){
      cout<<"x";
    }
    for(int k=i;k<n+1;k++){
      cout<<a;
      a++;
    }
    cout<<endl;
  }
  return 0;
}