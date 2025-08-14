#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
int main(){
int n;
cout<<"Enter how many elements you want in array : ";
cin>>n;
 int arr[n];
  cout<<"Enter the elements of array : ";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  bubble_sort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}