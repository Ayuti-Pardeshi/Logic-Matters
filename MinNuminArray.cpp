#include <iostream>
using namespace std;

int main() {
    int arr[5] = {8, 4, 2, 9, 1};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Minimum value is: " << min << endl;
}
