#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid overflow
        if (nums[mid] == target) return mid; // Found target
        
        // Check if left half is sorted
        if (nums[low] <= nums[mid]) { 
            if (nums[low] <= target && target < nums[mid]) {
                high = mid - 1; // Search left half
            } else {
                low = mid + 1; // Search right half
            }
        }
        // Otherwise, right half must be sorted
        else { 
            if (nums[mid] < target && target <= nums[high]) {
                low = mid + 1; // Search right half
            } else {
                high = mid - 1; // Search left half
            }
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << "Index of target: " << search(nums, target) << endl;
    return 0;
}
