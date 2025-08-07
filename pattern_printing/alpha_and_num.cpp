/*
1
AB
123
ABCD*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    int a=1;
    int b=65;
    for(int j=1;j<=i;j++){
      if (i%2!=0){
        cout<<a;
        a++;
      }else{
        cout<<(char)b;
        b++;

      }
    }
    cout<<endl;
  }
  return 0;
}