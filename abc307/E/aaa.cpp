#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  int n,k;
  cin>>n>>k;
  lint sum=0;
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    sum+=min(j*2,abs(j-k)*2);
  }
  log(sum);
}
