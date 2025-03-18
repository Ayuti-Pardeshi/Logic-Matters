#include <iostream>
using namespace std;

int diagonalSum(int arr[][100], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];  // Primary diagonal
        sum += arr[i][n - 1 - i];  // Secondary diagonal
    }

    // If n is odd, subtract the center element as it got added twice
    if (n % 2 == 1) {
        sum -= arr[n / 2][n / 2];
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    int arr[100][100];  // Assuming max size 100x100

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Diagonal Sum: " << diagonalSum(arr, n) << endl;
    return 0;
}
