#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> ciclic(int n, int k) {
    if(k == n) {
        return vector<int> (n,1);
    }
    else if(k == 1) {
        vector<int> answer(n);

        for(int i = 0; i < n; i++) {
            answer[i] = i + 1;
        }

        return answer;
    }
    else {
        return {-1};
    }
}

int main () {
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases, n, k;
    cin >> cases;

    while(cases) {
        cin >> n >> k;

        vector<int> a = ciclic(n,k);

        for(int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }

        cout << '\n';

        cases--;
    }
 
    return 0;
}