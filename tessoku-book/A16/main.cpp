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
  vector<int> a(n+1),b(n+1),dp(n+1);
  for(int i=2;i<=n;i++){
    cin>>a[i];
  }
  for(int i=3;i<=n;i++){
    cin>>b[i];
  }
  dp[1]=0;
  dp[2]=a[2];
  for(int i=3;i<=n;i++){
    dp[i]=min(dp[i-1]+a[i],dp[i-2]+b[i]);
  }
  cout<<dp[n]<<endl;
}
