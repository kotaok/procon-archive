#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  vector<int> s;
  queue<int> q;
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < 100000000; i++) {
    q.push(i);
  }
  for (int i = 0; i < n; i++) {
    s.push_back(q.front());
    q.pop();
    int j = q.size();
    for (int h = 1; h <= j; h++) {
      if (h % k == 0) {
        q.pop();
      } else {
        q.push(q.front());
        q.pop();
      }
    }
  }
  for (int i = 0; i < s.size(); i++) {
    log(s[i]);
  }
  cout << endl;
  for (int i = s.size() - 1; i > 0; i--) {
    log(s[i] - s[i - 1]);
  }
}
