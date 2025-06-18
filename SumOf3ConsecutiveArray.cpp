#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int maxSum = 0;

    for (int i = 0; i <= n - 3; i++) {
        int sum = arr[i] + arr[i+1] + arr[i+2];
        if (sum > maxSum)
            maxSum = sum;
    }

    cout << "Max sum of 3 numbers in a row: " << maxSum;
    return 0;
}
