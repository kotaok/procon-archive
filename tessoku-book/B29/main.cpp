#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
#define P 1000000007
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

bitset<200> dtob(unsigned long long n) {
  bitset<200> r;
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
  lint a, b;
  cin >> a >> b;
  vector<unsigned long long> l(100000);
  l[1] = a % P;
  for (int i = 2; i <= 200; i++) {
    l[i] = l[i - 1] % P * l[i - 1] % P;
  }
  unsigned long long res = 1;
  bitset<200> bits = dtob(b);
  for (int i = 0; i < 200; i++) {
    if (bits[i]) {
      res *= l[i + 1];
      res %= P;
    }
  }
  log(res);
  return 0;
}
