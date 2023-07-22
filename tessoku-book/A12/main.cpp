#include <bits/stdc++.h>
#define log(x) cout << x << endl
using namespace std;
using lint = long long;

int n, k;
int z[100001];

bool check(lint x) {
  lint sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += x / z[i];
  }
  if (sum >= k) {
    return true;
  } else {
    return false;
  }
}

int main() {

  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> z[i];
  }
  lint l = 1;
  lint r = 1000000000;
  lint m = (l + r) / 2;
  while (l < r) {
    if (check(m)) {
      r = m;
      m = (l + r) / 2;
    } else {
      l = m + 1;
      m = (l + r) / 2;
    }
  }
  log(l);
}
