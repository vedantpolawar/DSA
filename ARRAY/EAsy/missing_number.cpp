#include<bits/stdc++.h>
using namespace std;
// int main(){
    // vector<int> arr;
    // int q;
    // cout << "Enter size of array: ";
    // cin >> q;

    // for (int i = 0; i < q; i++) {
    //     int number;
    //     cin >> number;
    //     arr.push_back(number);
    // }
//     for(int i=1;i<=q;i++){
//       int flag=0;
//       for(int j=0;j<q;j++){
//         if (arr[j]==i){
//           flag=i;
//           break;
//         }
//       }
//       if(flag==0){
//         cout<<i;       
//       }
//     }
    
//   return 0;
// }
///////////////////////////////better way
// int main(){
    // vector<int> arr;
    // int q;
    // cout << "Enter size of array: ";
    // cin >> q;

    // for (int i = 0; i < q; i++) {
    //     int number;
    //     cin >> number;
    //     arr.push_back(number);
    // }
//     int hash[q+1]={0};
//     for(int i=0;i<q;i++){
//       hash[arr[i]]++;
//     }
//     for(int i=1;i<=q;i++){
//       if(hash[i]==0){
//         cout<<i;
//       }
//     }
//     return 0;
// }
////////////////////////////////////////////optimal way
// int main(){
    //   vector<int> arr;
    // int q;
    // cout << "Enter size of array: ";
    // cin >> q;

    // for (int i = 0; i < q-1; i++) {
    //     int number;
    //     cin >> number;
    //     arr.push_back(number);
    // }
//     int final_sum=(q*(q+1))/2;
//     int sum=0;
//     for(int i=0;i<q-1;i++){
//       sum+=arr[i];
//     }
//     cout<<final_sum-sum;
//   return 0;
// }
// doing with xor bitwise operator 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int q;
    cout << "Enter size of array (including missing number): ";
    cin >> q;

    cout << "Enter " << q-1 << " numbers: ";
    for (int i = 0; i < q-1; i++) {
        int number;
        cin >> number;
        arr.push_back(number);
    }

    int xor1 = 0; // XOR of all array elements
    int xor2 = 0; // XOR of numbers from 1 to q

    for (int i = 0; i < q-1; i++) {
        xor1 ^= arr[i];
        xor2 ^= (i+1);

    }
      xor2^=q;
    

    int missing = xor1 ^ xor2;
    cout << "Missing number is: " << missing << endl;

    return 0;
}
