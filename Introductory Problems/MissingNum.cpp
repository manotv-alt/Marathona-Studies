#include <iostream>
#include <vector>

using namespace std;

int main () {

    int n, ax;
    cin >> n;
    vector<bool> dp(n+1);

    for(int i = 1; i < n; i++) {
        cin >> ax;
        dp[ax] = true; 
    }

    for(int i = 1; i <= n; i++) {
        if(dp[i] == false) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}