#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int min=INT_MAX;
  cout<<"Enter how many elements you want in array :";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n-1;i++){
    int min_ind=i;
    for(int j=i;j<n;j++){
      if(arr[j]<arr[min_ind]){
        min_ind=j;
      }
    }
    swap(arr[i],arr[min_ind]);
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  return 0;
}