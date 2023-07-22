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
  vector<int> l;
  int c = 0;
  while (n != 0) {
    l.push_back(n % 2);
    n /= 2;
    c++;
  }

  int j = 10 - c;
  for (int i = 0; i < j; i++) {
    l.push_back(0);
  }
  reverse(all(l));
  for (int i = 0; i < 10; i++) {
    cout << l[i];
  }
  cout << endl;
}
