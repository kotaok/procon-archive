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
  vector<int> list(n);
  vector<int> sleep;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> list[i];
  }
  m[0] = 0;
  m[list[1]] = 0;
  for (int i = 2; i < n; i++) {
    if (i % 2 == 0) {
      m[list[i]] = m[list[i - 1]] + list[i] - list[i - 1];
    } else {
      m[list[i]] = m[list[i - 1]];
    }
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    auto itr1 = lower_bound(all(list), l);
    auto itr2 = lower_bound(all(list), r) - 1;
    int beginn = itr1 - list.begin();
    int endn = itr2 - list.begin() + 1;
    lint result = 0;
    if (beginn != 0 and beginn % 2 == 0) {
      result += list[beginn] - l;
    }
    if (endn % 2 == 0) {
      result += abs(list[endn - 1] - r);
    }
    result += m[*itr2] - m[*itr1];
    log(result);
  }
}
