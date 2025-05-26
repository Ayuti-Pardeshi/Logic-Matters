#include <iostream>
#include <list>
using namespace std;

int josephus(int n, int k) {
    list<int> people;

    // Initialize the list with people numbered from 1 to n
    for (int i = 1; i <= n; ++i)
        people.push_back(i);

    auto it = people.begin();

    while (people.size() > 1) {
        // Move iterator k-1 times
        for (int count = 1; count < k; ++count) {
            ++it;
            if (it == people.end()) it = people.begin(); // Circular move
        }

        // Remove the k-th person
        cout << "Eliminated: " << *it << endl;
        it = people.erase(it); // erase returns the next iterator
        if (it == people.end()) it = people.begin(); // Wrap around
    }

    return people.front(); // Last person remaining
}

int main() {
    int n = 7, k = 3;
    int survivor = josephus(n, k);
    cout << "The survivor is at position: " << survivor << endl;
    return 0;
}
