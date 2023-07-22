#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
#define INF 99999999
using namespace std;
using lint = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> dp(m + 5, vector<int>(1 << (n + 2), INF));
  vector<bitset<10>> a(m + 1);

  for (int i = 1; i <= m; i++) {
    for (int j = 0; j < n; j++) {
      int k;
      cin >> k;
      if (k == 1) {
        a[i].set(j);
      } else {
        a[i].reset(j);
      }
    }
  }

  dp[0][0] = 0;
  for (int i = 0; i < m; i++) {
    for (int bit = 0; bit < (1 << n); bit++) {
      if (dp[i][bit] != INF) {
        bitset<10> c = a[i + 1];
        dp[i + 1][bit] = min(dp[i + 1][bit], dp[i][bit]);
        dp[i + 1][(bit | int(c.to_ulong()))] =
            min(dp[i][bit] + 1, dp[i + 1][(bit | int(c.to_ulong()))]);
      }
    }
  }

  if (dp[m][(1 << n) - 1] == INF) {
    log(-1);
  } else {
    log(dp[m][(1 << n) - 1]);
  }
  return 0;
}
