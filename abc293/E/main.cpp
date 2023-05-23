#include <bits/stdc++.h>
#define log(x) cout << x << endl
using lint = long long;
using namespace std;

int main() {
  string s;
  int q;
  cin >> s;
  cin >> q;
  int reversecount = 0;
  bool is1 = false;
  for (int i = 0; i < q; i++) {
    int query;
    cin >> query;

    if (query == 1) {
      if (is1) {
        is1 = false;
      } else {
        is1 = true;
      }
      reversecount++;
    } else {
      int f;
      char c;
      cin >> f >> c;
      if (is1) {
        if (f == 1) {
          f = 2;
        } else {
          f = 1;
        }
      }

      if (f == 1) {
        s = c + s;
      } else {
        s += c;
      }
    }
  }

  if (reversecount % 2 != 0) {
    reverse(s.begin(), s.end());
  }

  log(s);
}
