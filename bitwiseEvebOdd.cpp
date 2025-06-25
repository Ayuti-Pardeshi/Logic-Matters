#include <iostream>
using namespace std;

int main()
{
    int n = 19;

    if ((n & 1) == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;

    cout << "Dividing " << n << " by 2 using shift: " << (n >> 1) << endl;

    return 0;
}
