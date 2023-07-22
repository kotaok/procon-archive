#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  lint a, b;
  cin >> a >> b;
  lint r = a / b;
  if (a > r * b) {
    log(r + 1);
  } else {
    log(r);
  }
  
  
  
  
}
