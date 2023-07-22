#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, m, h, k;
  string s;
  cin >> n >> m >> h >> k >> s;
  vector<pair<int, int>> l(m + 1);
  for (int i = 0; i < m; i++) {
    cin >> l[i].first >> l[i].second;
  }

  int r = s.size();
  bool res = true;
  pair<int, int> now = {0, 0};
  if (r <= h) {
    r = 0;
  }
  for (int i = 0; i < r; i++) {
    if (s[i] == 'R') {
      now.first++;
    } else if (s[i] == 'L') {
      now.first--;
    } else if (s[i] == 'U') {
      now.second++;
    } else if (s[i] == 'D') {
      now.second--;
    }
    h--;
    if (h < 0) {
      res = false;
      break;
    } else if (h < k) {
      if (find(all(l), now) != l.end()) {
        h = k;
      }
    }
  }
  if (res) {
    log("Yes");
  } else {
    log("No");
  }

  // if (first) {
  //   cout << i << " " << j << " "
  //        << "First"
  //        << " " << fp << " " << sp << endl;
  // } else {
  //   cout << i << " " << j << " "
  //        << "Second"
  //        << " " << fp << " " << sp << endl;
  // }
}
