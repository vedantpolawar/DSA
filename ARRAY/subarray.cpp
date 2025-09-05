#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr;
  int n;
  cout<<"Enter Size of array : ";
  cin>>n;
  for(int i=0;i<n;i++){
    int number;
    cin>>number;
    arr.emplace_back(number);
  }
  //my logic
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; i + j < n; j++) {
//         for (int k = 0; k <= j; k++) {
//             cout << arr[i + k] << " ";
//         }
//         cout << endl;
//     }
// }
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=i;k<=j;k++){
        cout<<arr[k];
      }
      cout<<endl;
    }

  }
  
  return 0;
}