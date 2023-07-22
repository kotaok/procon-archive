#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin>>n;
  vector<int> l(n);
  for(int i=0;i<n;i++){
    cin>>l[i];
  }
  sort(all(l));
  l.erase(unique(all(l),l.end()));
  
}
