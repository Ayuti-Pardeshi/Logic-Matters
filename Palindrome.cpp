#include <iostream>
#include <cstring>  // Required for strlen()
using namespace std;

int main() {
    char str[] = "morrom";  // Corrected declaration
    int length = strlen(str);
    bool isPalindrome = true; // Assume it's a palindrome initially

    for (int i = 0, j = length - 1; i < j; i++, j--) { // Compare from both ends
        if (str[i] != str[j]) {
            isPalindrome = false;
            break; // No need to check further
        }
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
