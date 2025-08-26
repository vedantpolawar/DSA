#include <bits/stdc++.h>
using namespace std;

void swapVal(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void reverse_arr(vector<int> &arr, int start, int end) {
    while (start < end) {
        swapVal(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr;
    int k;
    cout << "Enter by how many times you want to rotate array: ";
    cin >> k;

    int q;
    cout << "Enter size of array: ";
    cin >> q;

    for (int i = 0; i < q; i++) {
        int number;
        cin >> number;
        arr.push_back(number);
    }

    int n = arr.size();
    k = k % n;  
    reverse_arr(arr, 0, n - 1);
    reverse_arr(arr, 0, k );
    reverse_arr(arr, k+1, n - 1);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
