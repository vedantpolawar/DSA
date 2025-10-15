#include<bits/stdc++.h>
using namespace std;
// int main(){
//   vector<int> nums;
  // int q;
  // cin>>q;
  // while(q--){
  //   int number;
  //   cin>>number;
  //   nums.emplace_back(number);
  // }
//   vector<int>arr;
//   int check=0;
//   for(int i=0;i<nums.size();i++){
//     if(nums[i]==0){
//       continue;
//     }
//     arr.push_back(nums[i]);
//     check++;
//   }
//   // cout<<check;
//   for(int i=check;i<nums.size();i++){
//     arr.emplace_back(0);
//   }
  // for(int i:arr){
  //   cout<<i;
  // }
//   return 0;
// }
int main(){
  vector<int> nums;
    int q;
  cin>>q;
  int n=q;
  while(q--){
    int number;
    cin>>number;
    nums.emplace_back(number);
  }
  int j=-1;
  for(int i=0;i<n;i++){
    if(nums[i]==0){
      j=i;
      break;
    }
  }
  for(int i=j+1;i<n;i++){
    if(nums[i]!=0){
      swap(nums[i],nums[j]);
      j++;
    }
  }
    for(int i:nums){
    cout<<i;
  }
  return 0;
}