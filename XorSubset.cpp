// Count of numbers (x) smaller than or equal to n such that n+x = n^x:
// here unset bits means zero bits
#include <bits/stdc++.h>
using namespace std;

// function to count number of values less than
// equal to n that satisfy the given condition
int countValues(int n)
{
    // unset_bits keeps track of count of un-set
    // bits in binary representation of n
    int unset_bits=0;
    while (n)
    {
        if ((n & 1) == 0)
            unset_bits++;
        n=n>>1;
    }

    // Return 2 ^ unset_bits i.e. pow(2,count of zero bits)
    return 1 << unset_bits;
}

// Driver code
int main()
{
    int n = 15;
    cout << countValues(n);
    return 0;
}

// contributed by akashish__
