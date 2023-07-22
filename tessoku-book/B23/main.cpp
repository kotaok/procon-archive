#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
#define INF 99999999.0
using namespace std;
using lint = long long;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n + 1);

  for (int i = 1; i <= n; i++) {
    int x, y;
    cin >> x >> y;
    a[i] = make_pair(x, y);
  }

  vector<vector<double>> dp((1 << (n + 2)), vector<double>(n + 1, INF));
  dp[1][1] = 0;
  for (int i = 1; i <= (1 << n); i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        double dist = sqrt(pow(a[j].first - a[k].first, 2) +
                           pow(a[j].second - a[k].second, 2));
        dp[i | (1 << (k - 1))][k] =
            min(dp[i | (1 << (k - 1))][k], dp[i][j] + dist);
      }
    }
  }

  double res = INF;
  for (int i = 1; i <= n; i++) {
    double dist = sqrt(pow(a[1].first - a[i].first, 2) +
                       pow(a[1].second - a[i].second, 2));
    res = min(dp[(1 << n) - 1][i] + dist, res);
  }
  logfixed(res);
}
