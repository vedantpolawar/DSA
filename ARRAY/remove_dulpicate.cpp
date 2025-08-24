#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int q;
    cin>>q;
    int n=q;
    while(q--){
        int number;
        cin>>number;
        arr.push_back(number);
    }
    set<int> st;
    for(int i=0;i< n;i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
    for(int i=0;i<index;i++){
        cout<<arr[i];
    }
    return 0;
}