#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 4};
    int n = 4;
    int target = 8;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                found = true;
                break;
            }
        }
    }

    if (found) cout << "Pair found!";
    else cout << "No pair found.";
    return 0;
}
