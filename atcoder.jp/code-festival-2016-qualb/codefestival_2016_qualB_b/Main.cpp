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
  int a, b;
  cin >> a >> b;
  string s;
  cin >> s;
  int overseas = 1;
  int pass = 0;
  for (int i = 0; i < n; i++) {
    char c = s[i];
    if (c == 'a' and pass < a + b) {
      pass++;
      log("Yes");
    } else if (c == 'b' and pass < a + b and overseas <= b) {
      pass++;
      overseas++;
      log("Yes");
    } else {
      log("No");
    }
  }
}
