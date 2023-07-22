#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n;
  double d;
  cin >> n >> d;
  vector<bool> is(n, false);
  is[0] = true;
  queue<int> q;
  vector<pair<double, double>> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i].first >> l[i].second;
  }
  q.push(0);
  while (!q.empty()) {
    int now = q.front();
    for (int i = 0; i < n; i++) {
      if (!is[i] and d >= sqrt(pow(l[now].first - l[i].first, 2) +
                               pow(l[now].second - l[i].second, 2))) {
        is[i] = true;
        q.push(i);
      }
    }
    q.pop();
  }
  for (int i = 0; i < n; i++) {
    if (is[i]) {
      log("Yes");
    } else {
      log("No");
    }
  }
}

