#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  lint n, m, d;
  cin >> n >> m >> d;
  vector<lint> a(n);
  vector<lint> b(m);
  lint mx = -1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (abs(a[i] - b[j]) <= d) {
        mx = max(mx, a[i] + b[j]);
      }
    }
  }
  log(mx);
}
