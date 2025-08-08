#include <iostream>      // For cin, cout
#include <map>           // For map (used in previous examples)
#include <vector>        // For vector
#include <algorithm>     // For sort, max_element, next_permutation
#include <string>        // For string
using namespace std;

// Custom comparator for sorting pairs
// Sort according to the second element in ascending order
// If second elements are equal, sort by first element in descending order
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // if second elements are equal
    return p1.first > p2.first;
}

int main() {
    // Sorting an array of pairs using custom comparator
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = 3;

    // Sort according to second element, if same then by first in descending
    sort(a, a + n, comp);

    // Output after sorting: {{4,1}, {2,1}, {1,2}}
    cout << "Sorted array of pairs:\n";
    for (int i = 0; i < n; i++) {
        cout << "{" << a[i].first << "," << a[i].second << "} ";
    }
    cout << endl;

    // Count set bits in an integer
    int num = 7; // Binary: 111, so 3 set bits
    int cnt = __builtin_popcount(num); // For int (32-bit)
    cout << "Number of set bits in 7: " << cnt << endl;

    // For long long number
    long long bigNum = 162662224822;
    int longCnt = __builtin_popcountll(bigNum); // For long long (64-bit)
    cout << "Number of set bits in 162662224822: " << longCnt << endl;

    // Next Permutation example
    string s = "123";
    cout << "All permutations of 123:\n";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Find maximum element in array of pairs based on pair comparison
    // max_element needs a comparator for pairs or specific field
    // Since max_element is not directly meaningful for pair<int,int> array,
    // we show max of first elements for simplicity
    int firstElements[] = {a[0].first, a[1].first, a[2].first};
    int maxi = *max_element(firstElements, firstElements + n);
    cout << "Maximum of first elements: " << maxi << endl;

    return 0;
}
