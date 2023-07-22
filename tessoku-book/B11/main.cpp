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
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }
  sort(all(l));

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    auto z = lower_bound(all(l), x);
    int r = z - l.begin();
    log(r);
  }
}
