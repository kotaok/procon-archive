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
  vector<vector<int>> g(n + 1);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for (int i = 1; i <= n; i++) {
    int si = g[i].size();
    if (si > 0) {
      cout << i << ": {";
      for (int j = 0; j < si; j++) {
        cout << g[i][j];
        if (j < si - 1) {
          cout << ", ";
        }
      }
      cout << "}" << endl;
    }
  }
}
