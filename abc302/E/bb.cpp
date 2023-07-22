#include <bits/stdc++.h>
using namespace std;
using lint = long long;

int main() {
  while (cin) {
    lint a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
  }
}
