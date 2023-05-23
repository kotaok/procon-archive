#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  vector<int> res;
  while (1) {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    if (n == 0 and m == 0) {
      break;
    }
    int money = m / n;
    for (int i = 0; i < n; i++) {
      int j;
      cin >> j;
      if (j < money) {
        sum += j;
      } else {
        sum += money;
      }
    }
    res.push_back(sum);
  }
  int si = res.size();
  for (int i = 0; i < si; i++) {
    log(res[i]);
  }
}
