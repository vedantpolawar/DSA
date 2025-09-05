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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                result.push_back(arr1[i]);
                break;
                
            }
        }
    }

    cout << "Intersection: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
