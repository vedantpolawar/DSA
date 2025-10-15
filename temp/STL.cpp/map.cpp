#include<iostream>
#include<map>
using namespace std;
//sorted values of keys madhe store hote ani map madhe unique key walech store hota in key and value pair
int main() {
    map<int,int> mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1] = 2;
    mpp.emplace(3, 1);

    mpp1[10] = {100, 200};
    mpp2[{5, 6}] = 999;

    cout << "mpp contents:\n";
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\nmpp1 contents:\n";
    for(auto it : mpp1){
        cout << it.first << " -> {" << it.second.first << ", " << it.second.second << "}" << endl;
    }

    cout << "\nmpp2 contents:\n";
    for(auto it : mpp2){
        cout << "{" << it.first.first << ", " << it.first.second << "} -> " << it.second << endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];//o ro null as it does not exist it is key
    //⚠️ Important: If key 5 does not exist, map creates a new entry {5, 0} automatically.
    // auto it =mpp1.find(5);
    // cout<<*(it).second;
    auto it=mpp.find(3);
    //if does not exist then it will point at end
    //lowerbound and upper bound function exists
    return 0;
}
