#include <iostream>
#include <vector>
using namespace std;

int main () {

    int n;
    long long int count = 0;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(i == n-1) break;

        if(arr[i] > arr[i+1]) {
            count += arr[i] - arr[i+1];
            arr[i+1] += arr[i] - arr[i+1];
        }
    }

    cout << count << "\n";

    return 0;
}