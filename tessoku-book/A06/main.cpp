#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> sum(n + 1);
  sum[0] = 0;
  for (int i = 1; i <= n; i++) {
    int j;
    cin >> j;
    sum[i] = sum[i - 1] + j;
  }

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    log(sum[r] - sum[l - 1]);
  }
}
