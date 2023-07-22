#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  lint n = 64;
  unsigned long long r = 0;
  for (lint i = 0; i < n; i++) {
    lint j;
    cin >> j;
    if (j == 1) {
      r += (lint(pow(lint(2), i)));
    }
  }
  log(r);
}