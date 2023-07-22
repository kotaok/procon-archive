#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> l(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> l[i];
  }
  sort(all(l));
  int left = 1;
  int right = n;
  int m = right / 2;
  int res = -1;
  while (left <= right) {
    m = (right + left) / 2;
    if (l[m] == x) {
      res = m;
      break;
    } else if (l[m] < x) {
      left = m + 1;
    } else {
      right = m - 1;
    }
  }
  log(res);
}
