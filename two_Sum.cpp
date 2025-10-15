#include<bits/stdc++.h>
using namespace std;
// int main(){
//    int n;
//   cout<<"Enter size of arr :";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//   int target;
//   cout<<"Enter Target Sum: ";
//   cin>>target;
//   int find=-1;
//   int lind=-1;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i==j) continue;
//       if(arr[i]+arr[j]==target){
//         find=i;
//         lind=j;
//         break;
//       }
//     }
//   }
//   cout<<"FIRST INDEX :"<<find<<endl<<"SECOND INDEX : "<<lind;
//   return 0;
// }
// int main(){
//    int n;
//   cout<<"Enter size of arr :";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//   int target;
//   cout<<"Enter Target Sum: ";
//   cin>>target;
//   map<int ,int>mpp;
//   for(int i=0;i<n;i++){
//     int a=arr[i];
//     int b=target-a;
//     if(mpp.find(b)!=mpp.end()){
//       cout<<mpp[b]<<i<<endl;
//     }
//     mpp[a]=i;    
//   }
// }
int main(){
     int n;
  cout<<"Enter size of arr :";
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int target;
  cout<<"Enter Target Sum: ";
  cin>>target;
  int left=0;
  int right=n-1;
  sort(arr.begin(),arr.end());
  while(left<right){
    int sum=arr[left]+arr[right];
    if(sum==target){
      cout<<"YES";
      break;
    }
    else if(sum<target)left++;
    else right--;
  }
  return 0;
}