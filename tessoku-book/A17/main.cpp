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
  vector<int> a(n + 1), b(n + 1), dp(n + 1), ans;
  for (int i = 2; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 3; i <= n; i++) {
    cin >> b[i];
  }
  dp[1] = 0;
  dp[2] = a[2];
  for (int i = 3; i <= n; i++) {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }
  ans.push_back(n);
  int now = n;
  while (now > 1) {
    if (dp[now - 1] + a[now] <= dp[now - 2] + b[now]) {
      ans.push_back(now - 1);
      now--;
    } else {
      ans.push_back(now - 2);
      now -= 2;
    }
  }

  reverse(all(ans));
  if (ans[0] == 0) {
    ans[0] = 1;
  }

  int si = ans.size();
  log(si);
  for (int i = 0; i < si; i++) {
    if (i < si - 1) {
      cout << ans[i] << " ";
    } else {
      cout << ans[i] << endl;
    }
  }
}
