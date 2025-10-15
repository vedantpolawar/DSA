#include<bits/stdc++.h>
using namespace std;
void palindrom(string a,string check,int i,int end){
  if(i>=end){
    cout<<a;
    if (a==check){
      cout<<endl<<"palindrom";
    }
    else{
      cout<<endl<<"Not a palindrom";
    }

    return ;
  }
  swap(a[i],a[end]);
  palindrom(a,check,i+1,end-1);
}
int main(){
  string a;
  cin>>a;
  int n=a.length();
  palindrom(a,a,0,n-1);
  return 0;
}