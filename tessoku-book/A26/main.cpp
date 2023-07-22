#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

bool check(int x) {
  bool res = true;
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      res = false;
    }
  }
  if (!res or x == 1) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int x;
    cin >> x;
    if (check(x)) {
      log("Yes");
    } else {
      log("No");
    }
  }
}
