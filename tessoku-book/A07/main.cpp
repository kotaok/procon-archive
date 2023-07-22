#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int d, n;
  cin >> d >> n;
  vector<int> l(d + 1), res(d + 1);
  res[0] = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    l[a]++;
    l[b + 1]--;
  }
  for (int i = 1; i <= d; i++) {
    res[i] = l[i] + res[i - 1];
  }
  for (int i = 1; i <= d; i++) {
    log(res[i]);
  }
}
