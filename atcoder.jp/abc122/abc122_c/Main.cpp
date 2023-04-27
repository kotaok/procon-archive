#include <bits/stdc++.h>
#define log(x) cout << x << endl
using lint = long long;
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<int> list(n);

  for (int i = 1; i < n; i++) {
    list[i] = list[i - 1];
    if (s.substr(i - 1, 2) == "AC") {
      list[i]++;
    }
  }

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    log(list[r - 1] - list[l - 1]);
  }
}
