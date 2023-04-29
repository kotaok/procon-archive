#include <bits/stdc++.h>
#define log(x) cout << x << endl
using lint = long long;
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int j = n / 2 - 1;
  int result;

  for (int i = 2; i <= n; i += 2) {
    if (s.substr(0, j) == s.substr(j, j)) {
      result = j * 2;
      break;
    }
    j--;
  }

  log(result);
}
