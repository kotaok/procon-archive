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
  vector<set<int>> l(n + 1);
  lint count = n;
  for (int i = 0; i < q; i++) {
    int j;
    cin >> j;

    if (j == 1) {
      int u, v;
      cin >> u >> v;
      if (l[u].empty()) {
        count--;
      }
      if (l[v].empty()) {
        count--;
      }
      l[u].insert(v);
      l[v].insert(u);

    } else {
      int v;
      cin >> v;
      for (auto itr = l[v].begin(); itr != l[v].end(); ++itr) {
        int t = *itr;
        l[t].erase(v);
        if (l[t].empty()) {
          count++;
        }
      }
      if (l[v].empty()) {
        count--;
      }
      l[v].clear();
      count++;
    }
    log(count);
  }
}
