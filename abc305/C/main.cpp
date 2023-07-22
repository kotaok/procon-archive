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
  int hsum = 0;
  int wsum = 0;
  vector<vector<char>> l(502, vector<char>(502));
  vector<int> hei(502);
  vector<int> wid(502);
  for (int i = 0; i < h; i++) {
    int wtmp = 0;
    for (int j = 0; j < w; j++) {
      char c;
      cin >> c;
      if (c == '#') {
        wtmp++;
      }
      l[i][j] = c;
    }
    wid[i] = wtmp;
    wsum = max(wsum, wtmp);
  }
  for (int i = 0; i < w; i++) {
    int htmp = 0;
    for (int j = 0; j < h; j++) {
      if (l[j][i] == '#') {
        htmp++;
      }
    }
    hsum = max(hsum, htmp);
    hei[i] = htmp;
  }
  int hres, wres;
  for (int i = 0; i < h; i++) {
    if (wid[i] != 0 and wid[i] != wsum) {
      wres = i + 1;
    }
  }
  for (int i = 0; i < w; i++) {
    if (hei[i] != 0 and hei[i] != hsum) {
      hres = i + 1;
    }
  }
  cout << wres << " " << hres << endl;
}
