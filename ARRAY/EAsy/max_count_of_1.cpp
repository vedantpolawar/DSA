#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> arr;
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i=0;i<n;i++){
      int number;
      cin>>number;
      arr.push_back(number);
    }
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
      if(arr[i]==1){
        count++;
      }else{
        max=count;
        count=0;
      }
    }
    cout<<max;
  return 0;
}