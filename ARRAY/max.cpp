#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr;
  int q,higest;
  cin>>q;
  while(q--){
    int number;
    cin>>number;
    arr.push_back(number);
  }
  higest=arr[0];
  for(auto it=arr.begin();it<arr.end();it++){
    if (*it>higest){
      higest=*it;
    }
  }
  cout<<higest;
}