#include <bits/stdc++.h>
#define log(x) cout << x << endl
using namespace std;
using lint = long long;

string bg(int n) {
  vector<string> l(n + 1);
  l[0] = "P";
  for (int i = 1; i <= n; i++) {
    l[i] = "B" + l[i - 1] + "P" + l[i - 1] + "B";
  }
  return l[n];
}

lint stringcount(string s, char c) { return count(s.cbegin(), s.cend(), c); }

int main() {
  lint n, x;
  cin >> n >> x;
  string b = bg(n);
  string e = b.substr(0, x);
  log(stringcount(e, 'P'));
}
