#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  // Target found, return its index
        } 
        else if (nums[mid] < target) {
            left = mid + 1;  // Search in right half
        } 
        else {
            right = mid - 1;  // Search in left half
        }
    }

    return left;  // Target not found, return insert position
}

int main() {
    vector<int> arr = {2, 4, 5};
    int target;

    cout << "Enter target: ";
    cin >> target;

    int index = searchInsert(arr, target);

    if (index < arr.size() && arr[index] == target) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found, should be placed at index: " << index << endl;
    }

    return 0;
}
