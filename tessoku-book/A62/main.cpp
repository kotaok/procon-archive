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
  vector<int> seen(n + 1, 0);
  stack<int> s;
  s.push(1);
  seen[1] = 1;
  while (!s.empty()) {
    int now = s.top();
    s.pop();
    seen[now] = 1;
   
    int si = g[now].size();
    for (int i = 0; i < si; i++) {
      if (seen[g[now][i]] == 0) {
        seen[i] = 1;
        s.push(g[now][i]);
      }
    }
  }
  bool res = true;
  for (int i = 1; i <= n; i++) {
    if (seen[i] == 0) {
      res = false;
    }
  }
  if (res) {
    cout << "The graph is connected." << endl;
  } else {
    cout << "The graph is not connected." << endl;
  }
}
