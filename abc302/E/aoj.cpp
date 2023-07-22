#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }
  sort(all(l));

  // 総和がX以下
  int right = 0;
  lint sum = 0;
  lint res = 0;

  for (int left = 0; left < n; left++) {
    while (right < n and sum + l[right] <= x) {
      sum += l[right];
      right++;
    }

    res += (right - left);
    if (right == left) {
      right++;
    } else {
      sum -= l[left];
    }
  }
  cout << res << endl;
}
