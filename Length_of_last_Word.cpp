#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool counting = false;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                counting = true;
                length++;
            }
            else if (counting) {
                break;
            }
        }

        return length;
    }
};

int main() {
    Solution sol;

    // Test case examples
    string test1 = "Hello World";
    string test2 = "   fly me   to   the moon  ";
    string test3 = "a";
    string test4 = "luffy is still joyboy";

    cout << "Length of last word in '" << test1 << "' is: " << sol.lengthOfLastWord(test1) << endl;
    cout << "Length of last word in '" << test2 << "' is: " << sol.lengthOfLastWord(test2) << endl;
    cout << "Length of last word in '" << test3 << "' is: " << sol.lengthOfLastWord(test3) << endl;
    cout << "Length of last word in '" << test4 << "' is: " << sol.lengthOfLastWord(test4) << endl;

    return 0;
}
