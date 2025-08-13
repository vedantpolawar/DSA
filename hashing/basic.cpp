#include<bits/stdc++.h>//whenever we declare hash globally fot int it can have size of hash[10^7] and for boolean it is 10^8. when it is declare int main function it has 10^6 and 10^7 respectively
using namespace std;
int main(){
  int n;
  cout<<"Enter number of elements in array : ";
  cin>>n;

  int arr[n];
  cout<<"Start entering elements fo array : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int hash[13]={0};
  for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
  }
  int q;
  cout<<"enter how elemnts we need to check : ";
  cin>>q;
  while(q--){
    int number;
    cout<<"Enter the number to check how many times it exist : ";
    cin>>number;
    cout<<hash[number]<<endl;
  }
return 0;
}