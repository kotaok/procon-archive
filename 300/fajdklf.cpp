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
  map<pair<char, int>, bool> m;
  vector<char> clist = {'S', 'H', 'C', 'D'};

  for (int i = 0; i < n; i++) {
    char c;
    int j;
    cin >> c >> j;
    pair<char, int> p = make_pair(c, j);
    m[p] = true;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 1; j < 14; j++) {
      pair<char, int> p = make_pair(clist[i], j);
      if (m[p] == false) {
        cout << clist[i] << " " << j << endl;
      }
    }
  }
}
