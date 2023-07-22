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
  vector<int> l(n * 3);
  map<int, int> m;
  vector<pair<int, int>> z;
  for (int i = 0; i < n * 3; i++) {
    int j;
    cin >> j;
    l[i] = j;
    m[j]++;
    if (m[j] == 2) {
      pair<int, int> p;
      p.first = i;
      p.second = j;
      z.push_back(p);
    }
  }
  sort(all(z));
  for (int i = 0; i < n; i++) {
    if (i < n - 1) {
      cout << z[i].second << " ";
    } else {
      cout << z[i].second << endl;
    }
  }
}
