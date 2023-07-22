#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<set<int>> l(n + 2);
  int all = (n - 1) * n;
  for (int i = 0; i < m; i++) {
    vector<int> s(n + 1);
    for (int j = 0; j < n; j++) {
      cin >> s[j];
      if (j > 0) {
        l[s[j]].insert(s[j - 1]);
      }
      if (j > 0 and j < n) {
        l[s[j - 1]].insert(s[j]);
      }
    }
  }
  int result = 0;
  for (int i = 1; i <= n; i++) {
    result += l[i].size();
  }
  log((all - result) / 2);
}
