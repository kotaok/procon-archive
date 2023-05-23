#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int h, w;
  cin >> h >> w;
  int asha = 0;
  int bsha = 0;
  vector<vector<int>> a(h, vector<int>(w));
  vector<vector<int>> b(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char k;
      cin >> k;
      // a[h][w] = k;
      if (k == '#') {
        asha++;
      }
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char k;
      cin >> k;
      // b[h][w] = k;
      if (k == '#') {
        bsha++;
      }
    }
  }

  if (asha != bsha) {
    log("No");
  } else if (a == b) {
    log("Yes");
  } else {
    for (int i = 0; i < h; i++) {

      for (int j = 0; j < w; j++) {
      }
    }
  }
}
