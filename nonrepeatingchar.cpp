#include <iostream>
using namespace std;
//Non repeating character code
int main() {
    string s = "aabbcddce";
    int count[256] = {0};  // for all characters

    // Step 1: Count each character
    for (int i = 0; i < s.length(); i++) {
        count[s[i]]++;
    }

    // Step 2: Find first one that appears only once
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i]] == 1) {
            cout << "First unique character is: " << s[i];
            return 0;
        }
    }

    cout << "No unique character.";
    return 0;
}
