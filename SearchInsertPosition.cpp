#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left; // If not found, this is the correct insert position
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 5, 6};

    int target1 = 5;
    int target2 = 2;
    int target3 = 7;
    int target4 = 0;

    cout << "Index for 5: " << sol.searchInsert(nums, target1) << endl; // Output: 2
    cout << "Index for 2: " << sol.searchInsert(nums, target2) << endl; // Output: 1
    cout << "Index for 7: " << sol.searchInsert(nums, target3) << endl; // Output: 4
    cout << "Index for 0: " << sol.searchInsert(nums, target4) << endl; // Output: 0

    return 0;
}
