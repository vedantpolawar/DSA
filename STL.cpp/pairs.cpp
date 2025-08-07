#include<iostream>
using namespace std;

int main(){
    pair<int, int> p = {1, 3};
    cout << "First value = " << p.first << endl
         << "Second value = " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;
    pair<int,int>arr[]={{1,2},{2,4},{5,1}};
    cout<<arr[1].second;//2 
    return 0;
}
 