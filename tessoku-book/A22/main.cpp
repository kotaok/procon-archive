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
  vector<int> a(n), b(n);
  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    cin >> b[i];
  }
  vector<lint> dp(n + 1, -100000000);
  dp[1] = 0;

  for (int i = 1; i < n; i++) {
    dp[a[i]] = max(dp[a[i]], dp[i] + 100);
    dp[b[i]] = max(dp[b[i]], dp[i] + 150);
  }
  log(dp[n]);
}
