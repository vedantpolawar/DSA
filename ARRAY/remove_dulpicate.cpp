// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr;
//     int q;
//     cin>>q;
//     int n=q;
//     while(q--){
//         int number;
//         cin>>number;
//         arr.push_back(number);
//     }
//     set<int> st;
//     for(int i=0;i< n;i++){
//         st.insert(arr[i]);
//     }
//     int index=0;
//     for(auto it:st){
//         arr[index]=it;
//         index++;
//     }
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
//----------------------->BEST WAy<-------------------------------------
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    for(int j=0;j<=i;j++){
        cout<<arr[j];                                                                                                                                    
    }
    return 0;
}