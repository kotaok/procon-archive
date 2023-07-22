#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  string r = "";
  for (int i = 0; i < n; i++) {
    r += s[i];
    r += s[i];
  }
  log(r);
}
