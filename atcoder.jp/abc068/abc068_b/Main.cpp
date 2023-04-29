#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  int result = -1;
  int ans = -1;
  for (int i = n; i > 0; i--) {
    int count = 0;
    int j = i;
    while (j % 2 == 0) {
      count++;
      j /= 2;
    }
    if (result < count) {
      result = count;
      ans = i;
    }
  }
  log(ans);
}