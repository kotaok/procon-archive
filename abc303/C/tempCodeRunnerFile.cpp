#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define all(x) (x).begin(), (x).end()
typedef long long lint;
using namespace std;

int main() {
  int w, h;
  cin >> w >> h;
  vector<vector<int>> l(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> l[i][j];
    }
  }

  vector<vector<int>> sh(h, vector<int>(w));
  vector<vector<int>> sw(h, vector<int>(w));
  for (int i = w - 1; i >= 0; i--) {
    for (int j = h - 1; j >= 0; j--) {
      if (j != h - 1) {
        sh[j][i] = l[j][i] + sh[j + 1][i];
      } else {
        sh[j][i] = l[j][i];
      }
    }
  }

  for (int i = h - 1; i >= 0; i--) {
    for (int j = w - 1; j >= 0; j--) {
      if (j != w - 1) {
        sw[i][j] = l[i][j] + sw[i][j + 1];
      } else {
        sw[i][j] = l[i][j];
      }
    }
  }
  int roopc = h + w;
  bool first = true;
  lint fp = 0;
  lint sp = 0;
  int i = 0;
  int j = 0;
  for (int k = 0; k < roopc - 1; k++) {
    if (i < h and j < w) {
      if (first) {
        if (sw[i][j] >= -(sh[i][j])) {
          fp += sw[i][j];
          i++;
        } else {
          sp += sh[i][j];
          j++;
        }
      } else {
        if (sh[i][j] >= -(sw[i][j])) {
          sp += sh[i][j];
          j++;
        } else {
          fp += sw[i][j];
          i++;
        }
      }
    } else {
      break;
    }
    // if (first) {
    //   cout << i << " " << j << " "
    //        << "First"
    //        << " " << fp << " " << sp << endl;
    // } else {
    //   cout << i << " " << j << " "
    //        << "Second"
    //        << " " << fp << " " << sp << endl;
    // }
    first = !first;
  }
  log(abs(fp - sp));
}
