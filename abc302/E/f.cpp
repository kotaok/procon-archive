#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define all(x) (x).begin(), (x).end()
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> l;
  set<vector<int>> s;
  for (int i = 0; i < n; i++) {
    vector<int> t(3);
    for (int j = 0; j < 3; j++) {
      cin >> t[j];
    }
    sort(all(t));
    l.push_back(t);
    s.insert(t);
  }
  log(l.size() - s.size());
}
