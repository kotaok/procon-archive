#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  vector<int> l(n), dp(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }
  for (int i = 0; i < n; i++) {
    dp[i] = 1;
    for (int j = 0; j < i - 1; j++) {
      if (l[i] < l[j])
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  int res = -1;
  for (int i = 0; i < n; i++) {
    res = max(res, dp[i]);
  }
  log(res);
}
