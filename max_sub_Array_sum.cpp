#include<bits/stdc++.h>
using namespace std;
// int main(){
//   int n;
//   cout<<"Enter Size of array : ";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int maxSum=0;
//   for(int i=0;i<n;i++){
//       for(int j=i;j<n;j++){
//         int sum =0;
//         for(int k=i;k<=j;k++){
//             sum+=arr[k];
//         }
//         maxSum=max(sum,maxSum);
//       }
//   }
//   cout << maxSum;
//     return 0;
// }
///////////////////////////BEtter
// int main(){
//   int n;
//   cout<<"Enter Size of array : ";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int maxSum=INT_MIN;
//   for(int i=0;i<n;i++){
//        int sum =0;
//       for(int j=i;j<n;j++){
//         sum+=arr[j];
//         maxSum=max(sum,maxSum);
//       }
//   }
//   cout << maxSum;
//     return 0;
// }
/////////////////optimal KAdanes algorithm..............
int main(){
  int n;
  cout<<"Enter Size of array : ";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxSum=INT_MIN;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxSum){
      maxSum=sum;
    }
    if(sum<0){
      sum=0;
    }
  }
  cout<<maxSum;
  return 0;
}