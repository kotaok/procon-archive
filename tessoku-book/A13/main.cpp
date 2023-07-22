#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  sort(all(v));
  lint sum = 0;
  for (int i = 1; i < n; i++) {
    int l = i + 1;
    int r = n;
    int m = (l + r) / 2;
    while (l <= r) {
      if (abs(v[m] - v[i]) > k) {
        r = m - 1;
        m = (l + r) / 2;
      } else if (abs(v[m] - v[i]) < k) {
        l = m + 1;
        m = (l + r) / 2;
      } else {
        break;
      }
    }  
    sum += (m - i);
  }
  log(sum);
}
