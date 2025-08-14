#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements in array : "; 
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    int j=i;
    while(j>0 && arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
   return 0;
}
// for i=0 no loop runs for i=0 loop run 1,lly it goes 1,2,3,4,...,n -- n(n+1)/2 O(n^2) in worst case and average case ;
//in best case time complexity is O(n) as only i wala loop chalega