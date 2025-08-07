#include<iostream>
using namespace std;
int main(){
  int m,n;
  cin>>m;
  cin>>n;
  for(int i=0;i<m;i++){
      int a=65;
    for(int j=0;j<n;j++){
      cout<<(char)a;
      a++;
    }
    cout<<endl;
  }
  return 0;
}