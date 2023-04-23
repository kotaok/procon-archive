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
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> l, r;
  for (int i = 0; i < n; i++) {
    if (s[i] == '|') {
      l.push_back(i);
    } else if (s[i] == '*') {
      r.push_back(i);
    }
  }
  if (l[0] < r[0] and r[0] < l[1]) {
    log("in");
  } else {
    log("out");
  }
}
