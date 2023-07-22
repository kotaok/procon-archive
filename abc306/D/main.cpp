#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  lint n;
  cin >> n;
  vector<pair<lint, lint>> l(n);
  for (int i = 0; i < n; i++) {
    lint x, y;
    cin >> x >> y;
    l[i].first = x;
    l[i].second = y;
  }
  unsigned long long r = 0;
  lint mx = 0;
  lint mx2 = -9999999999999;
  bool po = false;
  vector<lint> z;
  lint j=0;
  for (int i = 0; i < n; i++) {
    
    if(l[i].first==0 and l[i].second>0){
      j+=l[i].second;
    }
  }
  // for (int i = 0; i < n; i++) {
  //   if (l[i].first == 1) {
  //     mx = max(mx, l[i].second);
  //     if (i < n - 1) {
  //       if (l[i + 1].first == 0 and !po) {
  //         r += mx;
  //         mx = 0;
  //         po = true;
  //       }
  //     } else if (!po) {
  //       r += mx;
  //     }
  //   } else {
  //     if (l[i].second >= 0) {
  //       r += l[i].second;
  //       mx = 0;
  //       po = false;
  //     } else {
  //       mx2 = max(mx2, l[i].second);
  //       if()
  //     }
  //   }
  // }
  log(r);
}
