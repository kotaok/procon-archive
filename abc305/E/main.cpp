#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  Graph G(n + 1);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
  }

  vector<bool> pol(n + 1, false);
  vector<pair<int, int>> list(k);
  map<int, int> mp;
  for (int i = 0; i < k; i++) {
    int p, h;
    cin >> p >> h;
    pol[p] = true;
    mp[p] = h;
    list[i].first = p;
    list[i].second = h;
  }
  for (int i = 1; i <= n; i++) {
    vector<bool> seen(n + 1, false);
    if (pol[i]) {
      continue;
    } else {
      queue<int> q;
      q.push(i);
      seen[i] = true;
      int dis = 0;
      while (!q.empty()) {
        int state = q.front();
        q.pop();
        for (auto next : G[state]) {
          if (!seen[next]) {
            seen[next] = true;
            q.emplace(next);
          }
        }
      }
    }
  }
}
