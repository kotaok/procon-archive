#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n,m;
  cin>>n>>m;
  vector<vector<int>> l(n);
  for(int i=0;i<n;i++){
    int p;
    cin>>p;
    l[i].push_back(p);
    int c;
    cin>>c;
    for(int j=0;j<c;j++){
      int f;
      cin>>f;
      l[i].push_back(f);
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j) continue;

    }
  }
}
