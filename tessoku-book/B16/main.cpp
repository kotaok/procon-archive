#include <bits/stdc++.h>
#define log(x) cout << x << endl
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> l(n+1),dp(n+1);
  for(int i=1;i<=n;i++){
    cin>>l[i];
  }
  dp[1]=0;
  dp[2]=abs(l[1]-l[2]);
  for(int i=3;i<=n;i++){
    dp[i]=min(dp[i-1]+abs(l[i]-l[i-1]), dp[i-2]+abs(l[i]-l[i-2]));
  }
  log(dp[n]);
}


