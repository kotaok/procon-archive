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
  for (int i = 0; i < n; i++) {
    lint sum = 0;
    for (int j = 0; j < 7; j++) {
      int k;
      cin >> k;
      sum += k;
    }
    if (i < n - 1) {
      cout << sum << " ";
    } else {
      cout << sum << endl;
    }
  }
}
