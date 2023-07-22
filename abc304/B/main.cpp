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

  if (100000000 <= n and (n <= 1000000000 - 1)) {
    log(n - n % 1000000);
  } else if (10000000 <= n and (n <= 100000000 - 1)) {
    log(n - n % 100000);
  } else if (1000000 <= n and (n <= 10000000 - 1)) {
    log(n - n % 10000);
  } else if (100000 <= n and (n <= 1000000 - 1)) {
    log(n - n % 1000);
  } else if (10000 <= n and (n <= 100000 - 1)) {
    log(n - n % 100);
  } else if (1000 <= n and (n <= 10000 - 1)) {
    log(n - n % 10);
  } else {
    log(n);
  }
}
