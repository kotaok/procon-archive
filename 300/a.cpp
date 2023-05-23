#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  // int n;
  // for (int i = 0; i < n; i++) {
  //   int y, m, d;
  //   cin >> y >> m >> d;

  // }
  // log(20 * 5 + 19 * 5);

  // log(20 * 10);
  // log(1000 / 3);
  // log(333 * 200 + 666 * 195);
  int y, m, d;
  cin >> y >> m >> d;
  int year = (1000 - y);
  int month = (1 - m);
  int day = (1 - d);
  log(year / 3 * 200 + (year - (year / 3)) * 195 + month / 2 * 19 +
      (month - (month / 2)) * 20 + day);
}
