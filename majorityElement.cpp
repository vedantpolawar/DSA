#include<bits/stdc++.h>
using namespace std;
// int main(){
//   int n;
//   cout<<"Enter size of arr :";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//   for(int i=0;i<n;i++){
//     int count=0;
//     for(int j=0;j<n;j++){
//       if(arr[j]==arr[i]){
//         count++;
//       }
//     }
//     if(count>n/2) cout<<arr[i];
//   }
//   return 0;
// }
///////////////////////////BEtter
// int main(){
//   int n;
//   cout<<"Enter size of arr :";
//   cin>>n;
//   vector<int> arr(n);
//   for(int i=0;i<n;i++){
//       cin>>arr[i];
//   }
//   map <int,int>hashmpp;
//   for(int i=0;i<n;i++){
//     hashmpp[arr[i]]++;
//   }
//   for(auto it:hashmpp){
//     if(it.second>n/2){
//       cout<<it.first;
//     }
//   }
//   return 0;
// }
//////////////optimal(moore's voting algorithm)
//At the end, candidate is still 2 (because the algorithm only changes candidate when count becomes 0 and we move to the next element).
// It does not retroactively switch the candidate at the moment count drops to zero.
int main(){
  int n;
  cout<<"Enter size of arr :";
  cin>>n;
  int count =0,candidate=0;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
      cin>>arr[i];}
  for(int i=0;i<n;i++){
   if(count==0){
    count=1;
    candidate=arr[i];
   }
   else if(arr[i]==candidate){
      count++;
   }
   else{
    count--;
   }}
   int count1=0;
   for(int i=0;i<n;i++){
    if(arr[i]==candidate)count1++;
   }
   if(count1>n/2){
    cout<<candidate;
   }
  
  return 0;
}