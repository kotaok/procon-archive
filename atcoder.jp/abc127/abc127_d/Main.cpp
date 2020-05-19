#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;

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

int main(){
  lint n,m;
  cin>>n>>m;
  vector<pair<lint,lint>> l;
  lint h=1;
  rep(i,n){
    lint j;cin>>j;
    pair<lint,lint> e;
    e.first=j;e.second=h;
    l.pb(e);
  }
  rep(i,m){
    lint a,b;cin>>a>>b;
    pair<lint,lint> e;
    e.first=b;e.second=a;
    l.pb(e);
  }

  sort(all(l));
  reverse(all(l));
  lint r=0;
  lint count=0;
  rep(i,n){
    if(l[r].second>0){
      count+=l[r].first;
      l[r].second--;
    }
    else{
      r++;
      count+=l[r].first;
      l[r].second--;
    }
  }
  cout<<count;
}