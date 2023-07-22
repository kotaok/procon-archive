#include <bits/stdc++.h>
#define log(x) cout << x << endl

#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(2005, vector<int>(2005));
  for (int i = 1; i <= s; i++) {
    for (int j = 1; j <= t; j++) {
      if (s[i - 1] == t[j - 1]) {
        dp[i][j] = 1;
      }
    }
  }
  for (int i = 1; i <= s; i++) {
    for (int j = 1; j <= t; j++) {
      dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]) + dp[i][j];
    }
  }
  log(dp[i][j]);
}
