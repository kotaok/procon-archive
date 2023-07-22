#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;
#define P 1000000007
bitset<100> dtob(lint n) {
  bitset<100> r;
  for (int i = 0; i < 100; i++) {
    int a = n % 2;
    n /= 2;
    if (a) {
      r.set(i);
    } else {
      r.reset(i);
    }
  }
  return r;
}

int main() {
  int n, r;
  cin >> n >> r;
  unsigned long long a = 1;
  unsigned long long invb;
  unsigned long long b = 1;
  vector<unsigned long long> rep2(100);

  for (int i = 1; i <= n; i++) {
    a *= i;
    a %= P;
  }
  for (int i = 1; i <= r; i++) {
    b *= i;
    b %= P;
  }
  for (int i = 1; i <= n - r; i++) {
    b *= i;
    b %= P;
  }
  rep2[0] = b;
  for (int i = 1; i < 100; i++) {
    rep2[i] = rep2[i - 1] * rep2[i - 1];
    rep2[i] %= P;
  }
  invb = 1;
  bitset<100> bits = dtob(P - 2);
  for (int i = 0; i < 100; i++) {
    if (bits[i]) {
      invb *= rep2[i];
      invb %= P;
    }
  }
  log(a * invb % P);
  return 0;
}
