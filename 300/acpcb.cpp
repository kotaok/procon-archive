#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> result;
  while (1) {
    int n, m, p;
    cin >> n >> m >> p;
    if (!n) {
      break;
    }
    int gold = 0;
    int wint = 0;

    for (int i = 0; i < n; i++) {
      int j;
      cin >> j;
      gold += j;
      if (i + 1 == m) {
        wint = j;
      }
    }

    gold = (gold * (100 - p));

    result.push_back(gold / wint);
  }
  int si = result.size();
  for (int i = 0; i < si; i++) {
    cout << result[i] << endl;
  }
}
