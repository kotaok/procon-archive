#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, s;
  cin >> n >> s;
  vector<int> a(n + 1);
  a[0] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<vector<int>> dp(n + 10, vector<int>(s + 10000));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= s; j++) {
      if (dp[i - 1][j]) {
        dp[i][j] = 1;
        dp[i][j + a[i]] = 1;
      }
    }
  }

  if (dp[n][s]) {
    log("Yes");
  } else {
    log("No");
  }
}
