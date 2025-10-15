//my approach 
//#include<iostream>
// using namespace std;
// void reverse(int arr[],int size,int start,int end){
//   if(start>=end){
//     return;
//   }
//   int temp=arr[start];
//   arr[start]=arr[end];
//   arr[end]=temp;
//   reverse(arr,5 ,start+1,end-1);
// };
// int main(){
//   int arr[5]={1,2,3,4,5};
//   reverse(arr,5,0,4);
//   for(int i=0;i<5;i++){
//     cout<<arr[i]," ";
//   }
//   return 0;
// }
#include<iostream>
#include<utility>
#include<vector>
using namespace std;
void reverse (int i,vector<int>&arr,int n){
  if (i>=n/2) return ;
  swap(arr[i],arr[n-i-1]);
  reverse(i+1,arr,n);
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  reverse(0,arr,n);
  for(auto i:arr) cout<<i<<" ";
}