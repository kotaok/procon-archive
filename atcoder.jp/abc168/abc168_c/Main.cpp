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
  double hh=30.0;
  double mm=6.0;
  double a,b,h,m;
  cin>>a>>b>>h>>m;
  double e=m/60.0*30.0;
  hh=hh*h+e;
  mm=mm*m;
  hh=360.0-hh;
  mm=360.0-mm;
  double r;
  double pi = 3.141592653589793238;
  r=max(hh,mm)-min(hh,mm);
  double Cos=cos(r/180.0*pi);
  double resu;
  resu=a*a+b*b-2.0*a*b*Cos;
  resu=sqrt(resu);
  cout<<fixed<<setprecision(15)<<resu<<endl;
}