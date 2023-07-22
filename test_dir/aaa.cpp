#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  // n. size
  // l. list
  // k. search number
  bool ans = false;
  for (int i = 0; i < (1 << n); i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      int wari = (1 << (j));
      if ((i / wari) % 2 == 1) {
        sum += l[j];
      }
    }
    log(sum);
    if (sum == k) {
      ans = true;
    }
  }
}
