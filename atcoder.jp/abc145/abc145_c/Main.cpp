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
  int n;
  cin>>n;
  vector<int> l;
  for(int i=1;i<=n;i++){
    l.pb(i);
  }
  map<int,pair<double,double>> m;
  for(int i=1;i<=n;i++){
    pair<double,double> xy;
    cin>>xy.first>>xy.second;
    m[i]=xy;
  }
  double num=0;
  int count=0;
  do{
    for(int i=0;i<n-1;i++){
      double xx=pow(m[l[i]].first-m[l[i+1]].first,2);
      double yy=pow(m[l[i]].second-m[l[i+1]].second,2);
      num+=sqrt(xx+yy);
    }
    count++;
  } while(next_permutation(all(l)));
  cout<<setprecision(10)<<fixed<<num/count<<endl;

}