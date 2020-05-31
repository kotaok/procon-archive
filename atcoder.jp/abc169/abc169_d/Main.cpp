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

map< lint, int > prime_factor(lint n) {
  map< lint, int > ret;
  for(lint i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}


int main(){
  lint n;
  lint result=0;
  cin>>n;
  map <lint,int> m;
  vector<int> l;
  vector<int> q;
  lint be;
  for(auto p:prime_factor(n)){
    while(p.second--) {
      int w=p.first;
      q.pb(w);
    }
  }
  for(int i=0;i<q.size();i++){
    int t=q[i];
    int f=count(all(l),t);
    if(f==0){
      l.pb(t);
      int num=count(all(q),t);
      for(int j=1;num>0;j++){
        num-=j;
        if(num>=0) result++;
      }
    }
  }

  cout<<result;

}