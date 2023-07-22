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
  set<int> s;
  for (int i = 0; i < n; i++) {
    int j, x;
    cin >> j >> x;
    if (j == 1) {
      s.insert(x);
    } else if (j == 2) {
      s.erase(x);
    } else {
      auto itr = s.lower_bound(x);
      if (itr == s.end()) {
        log("-1");
      } else {
        cout << *itr << endl;
      }
    }
  }
}
