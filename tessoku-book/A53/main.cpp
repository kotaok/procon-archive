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
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    if (j == 1) {
      int k;
      cin >> k;
      q.push(k);
    } else if (j == 2) {
      cout << q.top() << endl;
    } else {
      q.pop();
    }
  }
}
