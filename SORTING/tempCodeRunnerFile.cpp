#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int temp[high - low + 1]; // temporary array for merged values
    int left = low;
    int right = mid + 1;
    int idx = 0;

    // Merge the two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[idx++] = arr[left++];
        } else {
            temp[idx++] = arr[right++];
        }
    }

    // Copy remaining elements from left half (if any)
    while (left <= mid) {
        temp[idx++] = arr[left++];
    }

    // Copy remaining elements from right half (if any)
    while (right <= high) {
        temp[idx++] = arr[right++];
    }

    // Copy back to original array
    for (int i = 0; i < idx; i++) {
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
