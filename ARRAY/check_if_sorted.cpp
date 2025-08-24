#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bool check=true;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
      check=true;
    }
    else{
      check=false;
    }
  }
  if(check){
    cout<<"sorted";
  }else{
    cout<<"Not sorted";
  }
  return 0;
}