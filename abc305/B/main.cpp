#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  map<char, int> m;
  m['A'] = 0;
  m['B'] = 3;
  m['C'] = 4;
  m['D'] = 8;
  m['E'] = 9;
  m['F'] = 14;
  m['G'] = 23;
  char p, q;
  cin >> p >> q;
  log(abs(m[p] - m[q]));
}
