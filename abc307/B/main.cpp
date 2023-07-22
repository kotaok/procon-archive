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
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  bool is = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      string t = "";
      string g = "";
      if (i == j) {
        continue;
      } else {
        t += s[i];
        t += s[j];
        g += s[i];
        g += s[j];
        reverse(all(t));
        if (t == g) {
          is = true;
        }
      }
    }
  }
  if (is) {
    log("Yes");
  } else {
    log("No");
  }
}
