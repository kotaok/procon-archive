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
  vector<vector<int>> l(h + 1, vector<int>(w + 1));
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> l[i][j];
    }
  }
  vector<vector<int>> s(h + 1, vector<int>(w + 1));
  for (int i = 0; i <= h; i++) {
    for (int j = 0; j <= w; j++) {
      s[i][j] = 0;
    }
  }
  for (int i = 1; i <= h; i++) {
    s[i][1] = l[i][1];
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 2; j <= w; j++) {
      s[i][j] = s[i][j - 1] + l[i][j];
    }
  }
  for (int i = 2; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      s[i][j] += s[i - 1][j];
    }
  }

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int result = 0;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    result += s[c][d];
    result -= s[c][b - 1];
    result -= s[a - 1][d];
    result += s[a - 1][b - 1];
    log(result);
  }
}
