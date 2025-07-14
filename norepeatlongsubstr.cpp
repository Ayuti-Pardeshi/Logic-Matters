#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int left = 0, right = 0, maxLen = 0;

    while (right < s.length()) {
        if (!seen.count(s[right])) {
            seen.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        } else {
            seen.erase(s[left]);
            left++;
        }
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Length: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
