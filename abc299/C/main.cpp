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
  string s;
  cin >> n >> s;
  int dango;
  int stick;
  dango = stringcount(s, 'o');
  stick = stringcount(s, '-');

  if (dango == 0 or stick == 0) {
    log(-1);
  } else {
    int maxlevel = 1;
    int dangosize = 0;
    int stringsize = s.size();
    for (int i = 0; i < stringsize; i++) {
      if (s[i] == 'o') {
        dangosize++;
      } else {
        maxlevel = max(dangosize, maxlevel);
        dangosize = 0;
      }
    }
    maxlevel = max(dangosize, maxlevel);
    log(maxlevel);
  }
}
