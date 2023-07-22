#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> l(h + 2, vector<int>(w + 2));
  for (int i = 0; i < h + 2; i++) {
    for (int j = 0; j < w + 2; j++) {
      l[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    l[a][b]++;
    l[c + 1][d + 1]++;
    l[c + 1][b]--;
    l[a][d + 1]--;
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      l[i][j] += l[i - 1][j];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      l[i][j] += l[i][j - 1];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (j < w) {
        cout << l[i][j] << " ";
      } else {
        cout << l[i][j];
      }
    }
    cout << endl;
  }
}
