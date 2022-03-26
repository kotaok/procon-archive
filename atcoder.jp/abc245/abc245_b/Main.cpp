#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define uni(x) (x).erase(unique(x.begin(),x.end()),x.end())
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;

int gcd(lint x, lint y){
  return y==0 ? x:gcd(y,x % y);
}

int digsum(int n) {
  int res = 0;
  while(n > 0) {
    res += n%10;
    n /= 10;
  }
  return res;
}

int dignum(int n) {
  int res = 0;
  while(n > 0) {
    res++;
    n /= 10;
  }
  return res;
}

int stringcount(string s, char c) {
  return count(s.cbegin(), s.cend(), c);
}

int lcm(lint x, lint y){
  return x/ gcd(x, y) * y;
}

int combi(int n, int r){
  int num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}

vector<lint> divisor(lint n){
  vector<lint> ret;
  for(lint i=1;i*i<=n;i++){
    if(n%i==0){
      ret.pb(i);
      if(i*i!=n) ret.pb(n/i);
    }
  }
  sort(all(ret));
  return ret;
}

int main(){
  int n;
  vector<int> l;
  cin>>n;
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    l.pb(j);
  }
  sort(l.begin(),l.end());
  int ans=0;

  for(int i=0;i<2001;i++){
    auto result = find(l.begin(),l.end(),i);
    if(result==l.end()){
      ans=i;
      break;
    }
  }
  cout<<ans<<endl;
}