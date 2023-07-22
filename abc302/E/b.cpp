#include <bits/stdc++.h>
#define log(x) cout << x << endl
using namespace std;

int main() {
  vector<int> l;
  for (int i = 0; i < 200; i++) {
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    string s = to_string(sum);
    l.push_back(s.size());
    if (!cin) {
      break;
    }
  }
  for (int i = 0; i < l.size(); i++) {
    log(l[i]);
  }
}
