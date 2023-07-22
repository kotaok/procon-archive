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
  string s, t;
  cin >> s >> t;
  bool is = true;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      s[i] = 'l';
    }
    if (t[i] == '1') {
      t[i] = 'l';
    }
    if (s[i] == '0') {
      s[i] = 'o';
    }
    if (t[i] == '0') {
      t[i] = 'o';
    }
  }
  if (t == s) {
    log("Yes");
  } else {
    log("No");
  }
}
