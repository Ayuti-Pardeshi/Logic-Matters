#include <bits/stdc++.h>
using namespace std;

int chocolate(int arr[], int n, int m) {
    if (m == 0 || n == 0) return 0;  // Edge case

    // Step 1: Sort the array
    sort(arr, arr + n);

    // Step 2: Find the minimum difference in a window of size m
    int minDiff = INT_MAX;
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }

    return minDiff;
}

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 5;

    cout << "Minimum Difference: " << chocolate(arr, n, m) << endl;
    return 0;
}
