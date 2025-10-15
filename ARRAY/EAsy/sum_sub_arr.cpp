#include<bits/stdc++.h>
using namespace std;
// int main(){
  // vector<int> arr;
  // int n;
  // cout<<"Enter Size of array : ";
  // cin>>n;
  // int a;
  // cout<<"Enter the sum : ";
  // cin>>a;
  // for(int i=0;i<n;i++){
  //   int number;
  //   cin>>number;
  //   arr.emplace_back(number);
  // }
//    int len=0;
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         int sum=0;
//       for(int k=i;k<=j;k++){
//         sum+=arr[k];
//       }
//       if(sum==a){
//           len=max(len,j-i+1);
//         }
//     }
//   }
//   cout<<len;
//   return 0;
// }
//////////////////////////////better
int main(){
  vector<int> arr;
  int n;
  cout<<"Enter Size of array : ";
  cin>>n;
  int a;
  cout<<"Enter the sum : ";
  cin>>a;
  map<int,int>prevSumMap;
  int sum=0;
  int maxlen=0;
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    if(sum==a){
      maxlen=max(maxlen,i+1);
    }
    int res=sum-a;
    if(prevSumMap.find(res)!=prevSumMap.end()){
      int len=i-prevSumMap[res];
      maxlen=max(maxlen,len);
    }
    prevSumMap[sum]=i;
  }
  cout<<maxlen;
  return 0;
}