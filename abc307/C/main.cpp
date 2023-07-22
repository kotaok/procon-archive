#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n;
  string s;
  vector<int> v(n, 1);
  cin >> n >> s;
  while (1) {
    int l = -1;
    int r = -1;
    int b = s.size();
    for (int i = 0; i < n; i++) {
      if (s[i] == '(') {
        l = i;
      } else if (s[i] == ')') {
        r = i;
        if (l != -1) {
          for (int j = l; j <= r; j++) {
            v[j] = 0;
          }
          s.erase(l, r - l + 1);
          l = -1;
          n = s.size();
        }
      }
    }
    if (b == n) {
      break;
    }
  }
  log(s);
}
