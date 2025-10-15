#include<bits/stdc++.h>
using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int high=arr[0];
//   int sec_high=arr[0];
//   int idx=0;
//   for(int i=0;i<n;i++){
//     if (arr[i]>high){
//       high=arr[i];
//       idx=i;
//     }
//   }
//   arr[idx]=INT_MIN;
//   for(int i=0;i<n;i++){
//     if (arr[i]>sec_high){
//       sec_high=arr[i];
//     }
//   }
//   cout<<sec_high;
//   return 0;
// }
///better way;
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int high=arr[0];
//   int sec_high=arr[0];
//   int idx=0;
//   for(int i=0;i<n;i++){
//     if (arr[i]>high){
//       high=arr[i];
//     }
//   }
//   for(int i=0;i<n;i++){
//     if (arr[i]>sec_high&&arr[i]<high){
//       sec_high=arr[i];
//     }
//   }
//   cout<<sec_high;
//   return 0;
// }
////////////////////////////mentos way
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int highest=arr[0];
  int secHighest=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>highest){
      secHighest=highest;
      highest=arr[i];
    }
    else if(arr[i]<highest&&arr[i]>secHighest){
      secHighest=arr[i];
    }
  }

  cout<<highest<<endl<<secHighest;
  return 0;
}