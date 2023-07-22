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
  if (n % 5 == 0) {
    log(n);
  } else if (n % 5 >= 3) {
    log(n + (5 - n % 5));
  } else {
    log(n - n % 5);
  }
}
