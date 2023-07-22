#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, w;
  cin >> n >> w;
  vector<vector<lint>> dp(n + 10, vector<lint>(w + 100005, -1));
  vector<pair<int, int>> a(n + 1);
  for (int i = 1; i <= n; i++) {
    int w, v;
    cin >> w >> v;
    a[i] = make_pair(w, v);
  }
  dp[0][0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= w; j++) {
      if (dp[i - 1][j] != -1) {
        dp[i][j] = max(dp[i - 1][j], dp[i][j]);
        if (j + a[i].first <= w) {
          dp[i][j + a[i].first] =
              max(dp[i - 1][j] + a[i].second, dp[i][j + a[i].first]);
        }
      }
    }
  }
  lint res = 0;
  for (int i = 0; i <= w; i++) {
    res = max(res, dp[n][i]);
  }
  log(res);
}
