#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  vector<int> r;
  while (1) {
    int n;

    cin >> n;
    if (n == 0) {
      break;
    }
    string s = "";
    int result = 0;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;
      s += c;
    }
    for (int i = 0; i < n - 3; i++) {
      if (s.substr(i, 4) == "2020") {
        result++;
      }
    }
    r.push_back(result);
  }
  int aaa = r.size();
  for (int i = 0; i < aaa; i++) {
    log(r[i]);
  }
}
