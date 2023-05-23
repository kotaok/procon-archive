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
  double sumx = 0;
  double sumy = 0;
  vector<pair<int, int>> list(n);
  vector<int> h;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    sumx += x;
    sumy += y;

    list[i].first = x;
    list[i].second = y;
  }

  for (int i = 0; i < n - 1; i++) {
    int dx = list[i + 1].first - list[i].first;
    int dy = list[i + 1].second - list[i].second;
    if (dx == 0) {
      h.push_back(99999999);
    } else {
      h.push_back(dy / dx);
    }
  }
  int dx = list[0].first - list[n - 1].first;
  int dy = list[0].second - list[n - 1].second;
  if (dx == 0) {
    h.push_back(99999999);
  } else {
    h.push_back(dy / dx);
  }
  bool is = true;
  if (n % 2 == 0) {
    for (int i = 0; i < n / 2; i++) {
      if (h[i] != h[i + n / 2]) {
        is = false;
      }
    }
  }

  if (n % 2 == 0 and is) {
    cout << fixed << setprecision(10) << sumx / double(n) << " "
         << sumy / double(n) << endl;
  } else {
    log("NA");
  }
}
