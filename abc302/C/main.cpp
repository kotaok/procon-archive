#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  bool result = false;
  sort(all(s));

  do {
    bool is = true;
    for (int i = 0; i < n - 1; i++) {
      int count = 0;
      for (int j = 0; j < m; j++) {
        if (s[i].at(j) != s[i + 1].at(j)) {
          count++;
        }
        if (count >= 2) {
          is = false;
        }
      }
    }

    if (is) {
      result = true;
      break;
    }
  } while (next_permutation(all(s)));

  if (result) {
    log("Yes");
  } else {
    log("No");
  }
}
