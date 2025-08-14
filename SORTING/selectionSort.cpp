#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n,int arr[]){
  for(int i=0;i<n-1;i++){
    int min_ind=i;
    for(int j=i;j<n;j++){
      if(arr[j]<arr[min_ind]){
        min_ind=j;
      }
    }
    int temp=arr[min_ind];
    arr[min_ind]=arr[i];
    arr[i]=temp;
  }
}
int main(){
  int n;
  int min=INT_MAX;
  cout<<"Enter how many elements you want in array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array : ";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  selection_sort(n,arr);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
// firdt imr loop runs for n times  then n-1 and then n-2 and n-3 
// n+m-1+n-1+n-3+......+1=n(n-1)/2; O(n(n-1)/2) == O(n^2)