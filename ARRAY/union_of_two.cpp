// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     vector<int> arr1(n), arr2(n), result;
    
//     cout << "Enter elements of first array:\n";
//     for (int i = 0; i < n; i++) cin >> arr1[i];

//     cout << "Enter elements of second array:\n";
//     for (int i = 0; i < n; i++) cin >> arr2[i];

//     set<int>st;
//     for(int i=0;i<n;i++){
//       st.insert(arr1[i]);
//     }
//     for(int i=0;i<n;i++){
//       st.insert(arr2[i]);
//     }
//     cout << "UNION: ";
//     for (int x : st) cout << x << " ";
//     cout << endl;

//     return 0;
// }

//////////////////////////////////////////////////////optimal 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr1(n), arr2(n), result;
    
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++) cin >> arr1[i];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; i++) cin >> arr2[i];

    vector <int> result;
    int i=0;
    int j=0;
    while (i==n||j==n)
    {
      if(arr1[i]!=arr2[j]){
        if(arr1[i]>arr1[j])
    }
  }

    return 0;
}

