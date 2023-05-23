#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define pb push_back
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using lint = long long;
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}

template <class T> inline bool chmin(T &a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
const long long INF = 1LL << 60;
using Graph = vector<vector<int>>;

lint digsum(int n) {
  lint res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

lint dignum(int n) {
  lint res = 0;
  while (n > 0) {
    res++;
    n /= 10;
  }
  return res;
}

lint stringcount(string s, char c) { return count(s.cbegin(), s.cend(), c); }

lint combi(lint n, lint r) {
  lint num = 1;
  for (int i = 1; i <= r; i++) {
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main() {
  lint n, t;
  cin >> n >> t;
  lint maxnum = -1;
  lint winner = -1;
  vector<lint> c(n);
  vector<lint> r(n);

  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }

  for (int i = 0; i < n; i++) {
    if (c[i] == t) {
      if (maxnum < r[i]) {
        maxnum = max(maxnum, r[i]);
        winner = i + 1;
      }
    }
  }

  if (maxnum == -1) {
    for (int i = 0; i < n; i++) {
      if (c[i] == c[0]) {
        if (maxnum < r[i]) {
          maxnum = max(maxnum, r[i]);
          winner = i + 1;
        }
      }
    }
  }

  log(winner);
}
