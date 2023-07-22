#include <bits/stdc++.h>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> l(h + 3, vector<int>(w + 3));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> l[i][j];
    }
  }

  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      l[i][j] = l[i][j - 1] + l[i][j];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      l[i][j] = l[i - 1][j] + l[i][j];
    }
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = l[c][d] - l[a - 1][d] - l[c][b - 1] + l[a - 1][b - 1];
    cout << res << endl;
  }
}
