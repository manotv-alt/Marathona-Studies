#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> mex (vector<int> seq) {
    vector<bool> dp (seq.size()+1, false);

    for(int i = 0; i < seq.size(); i++) {
        if(dp[i] == false and i < seq[i]) {
            dp[i] == true;
        }
    }
}

int main () {
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases, num, ax;
    cin >> cases;

    while (cases) {
        cin >> num;
        vector<int> seq(num);

        for(int i = 0; i < num; i++) {
            cin >> seq[i];
        }

        vector<int> answer = mex(seq);

        for(int i = 0; i < num; i++) {
            cout << answer[i] << " ";
        }

        cout << '\n';

        cases--;
    }
 
    return 0;
}