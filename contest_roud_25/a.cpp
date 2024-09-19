#include <iostream>
#include <set>

using namespace std;

bool is_achievable(string s) {
  // Create a set to store the indices of turned-on lamps.
  set<int> indices;

  // Iterate over the desired configuration string.
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      indices.insert(i);
    }
  }

  // Check for adjacent indices in the set.
  for (int i = 0; i < s.size() - 1; i++) {
    if (indices.count(i) && indices.count(i + 1)) {
      return false;
    }
  }

  // The configuration is achievable.
  return true;
}

string solve(int n, string s) {
  // Check if the desired configuration is achievable.
  if (!is_achievable(s)) {
    return "NO";
  } else {
    return "YES";
  }
}

int main() {
  int t; // Number of test cases

  // Read the number of test cases.
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n; // Number of lamps
    string s; // Desired configuration

    // Read the number of lamps.
    cin >> n;

    // Read the desired configuration.
    cin >> s;

    // Process the current test case (call solve function)
    cout << solve(n, s) << endl;
  }

  return 0;
}
