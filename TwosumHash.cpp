#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (mp.count(complement))
            return {mp[complement], i};
        mp[nums[i]] = i;
    }
    return {}; // no solution
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(nums, target);
    cout << "Indices: " << res[0] << ", " << res[1] << endl;
    return 0;
}
