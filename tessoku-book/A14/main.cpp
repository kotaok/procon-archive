#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n), c(n), d(n);
  vector<int> p(n * n + 1), q(n * n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }
  int co = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      p[co] = a[i] + b[j];
      co++;
    }
  }
  co = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      q[co] = c[i] + d[j];
      co++;
    }
  }
  sort(all(p));
  sort(all(q));
  bool res = false;
  for (int i = 1; i < n * n; i++) {
    int check = k - p[i];
    if (binary_search(all(q), check)) {
      res = true;
      break;
    }
  }

  if (res) {
    log("Yes");
  } else {
    log("No");
  }
}
