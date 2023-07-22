#include <bits/stdc++.h>
#define log(x) cout << x << endl
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> l(1510, vector<int>(1510));
  for (int i = 0; i < 1510; i++) {
    for (int j = 0; j < 1510; j++) {
      l[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    l[a][b]++;
    l[c + 1][d + 1]++;
    l[a][d + 1]--;
    l[c + 1][b]--;
  }
  for (int i = 1; i < 1510; i++) {
    for (int j = 1; j < 1510; j++) {
      l[i][j] += l[i - 1][j];
    }
  }
  for (int i = 1; i < 1510; i++) {
    for (int j = 1; j < 1510; j++) {
      l[i][j] += l[i][j - 1];
    }
  }
  int res = 0;
  for (int i = 1; i < 1510; i++) {
    for (int j = 1; j < 1510; j++) {
      if (l[i][j] > 0) {
        res++;
      }
    }
  }
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      cout << l[i][j] << " ";
    }
    cout << endl;
  }
  log(res);
}
