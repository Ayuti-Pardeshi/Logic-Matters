
    #include <iostream>
using namespace std;

int main() {
    int marks = 76;
    int category; 

    // Categorizing marks into cases
    if (marks < 50)
        category = 1;
    else if (marks >= 50 && marks < 70)
        category = 2;
    else
        category = 3;

    switch (category) {
        case 1:
            cout << "Average";
            break;
        case 2:
            cout << "Very good";
            break;
        case 3:
            cout << "Excellent";
            break;
        default:
            cout << "Invalid";
    }

    return 0;
}
