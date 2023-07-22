#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int bits = 0; bits < (1 << n); bits++) {
    vector<int> l;
    for (int i = 0; i < n; i++) {
      if (bits & (1 << i)) {
        l.push_back(i);
      }
    }
    for (int i = 0; i < l.size(); i++) {
      cout << a[l[i]] << " ";
    }
    if (l.size() > 0) {
      cout << endl;
    }
  }
}
