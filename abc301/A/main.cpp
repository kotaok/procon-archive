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
  int p;
  if (n % 2 != 0) {
    p = (n + 1) / 2;
  } else {
    p = n / 2;
  }
  string s;
  cin >> s;

  int a = 0;
  int t = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') {
      a++;
    } else {
      t++;
    }
    if ()
  }
}
