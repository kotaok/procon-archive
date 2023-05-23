#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  while (1) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> p(n);
    vector<int> m(n);
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
      m[i] = 1;
    }

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;

      if (s[s.size() - 1] == '+') {
        c[s.size() - 1] = 1;

      } else if (s[s.size() - 1] == '*') {
        c[s.size() - 1] = 2;

      } else {
        int aa = s[s.size() - 1];
        cout << "AA" << aa << endl;
        p[s.size() - 2] += aa;
        m[s.size() - 2] *= aa;
      }
    }

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (c[i] == 1)
        ans += p[i];
      else if (c[i] == 2)
        ans += m[i];
    }

    cout << ans << endl;
    for (int i = 0; i < 3; i++) {
      log(p[i]);
    }
    for (int i = 0; i < 3; i++) {
      log(m[i]);
    }
    for (int i = 0; i < 3; i++) {
      log(c[i]);
    }
  }
}
