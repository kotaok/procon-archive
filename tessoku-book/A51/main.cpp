#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int q;
  cin >> q;
  stack<string> s;
  for (int i = 0; i < q; i++) {
    int j;

    cin >> j;
    if (j == 1) {
      string a;
      cin >> a;
      s.push(a);
    } else if (j == 2) {
      cout << s.top() << endl;
    } else {
      s.pop();
    }
  }
}
