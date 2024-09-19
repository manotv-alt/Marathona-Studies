#include <iostream>
#include <vector>
#define ll long long
using namespace std;

/*vector<unsigned ll> coullatz_sequence(unsigned ll n) {
    vector<unsigned ll> sequence;
    sequence.reserve(1000000); // Preaunsigned llocate memory to avoid dynamic resizing

    while (n != 1) {
        sequence.push_back(n);

        if (n & 1) {
            n = 3 * n + 1;
        } else {
            n >>= 1; // Right shift is equivalent to division by 2 for positive unsigned llegers
        }
    }
    sequence.push_back(1); // Add 1 to the end of the sequence

    return sequence;
}*/

int main() {
    unsigned ll n;
    cin >> n;

    /*vector<unsigned ll> sequence = coullatz_sequence(n);

    for (unsigned ll num : sequence) {
        cout << num << " ";
    }
    cout << endl;
    */

    while (n != 1) {
        cout << n << " ";
        if (n & 1) {
            n = 3 * n + 1;
        } else {
            n >>= 1;
        }
    }

    cout << n << '\n';

    return 0;
}
