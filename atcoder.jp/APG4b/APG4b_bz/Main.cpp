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

int sum(int n){
  if(n==0){
    return 0;
  }
  return n+sum(n-1);
}

int main(){
  int n;
  cin>>n;
  map<int,int> m;
  vector<int> l;


  rep(i,n){
    int j;cin>>j;
    m[j]++;
    l.pb(j);
  }
  uni(l);
  int max=0;
  int maxn=-1;
  for(int i=0;i<l.size();i++){
    if(max<m[l[i]]) {
      max=m[l[i]];
      maxn=l[i];
    }
  }
  cout<<maxn<<" "<<max<<endl;


}