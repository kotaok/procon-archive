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

int main(){
  int x,n,resu;
  int result1=0;
  int result2=0;
  cin>>x>>n;
  vector<int> l;
  map<int,int> m;
  rep(i,n){
    int j;cin>>j;
    l.pb(j);
    m[j]++;
  }
  for(int i=0;i<100;i++){
    if(m[x+i]==0){
      result1=x+i;
      break;
    }
  }
  for(int i=0;i<100;i++){
    if(m[x-i]==0){
      result2=x-i;
      break;
    }
  }
  if(abs(x-result1)>abs(x-result2)){
    resu=result2;
  }
  else if(abs(x-result1)<abs(x-result2)){
    resu=result1;
  }
  else{
    resu=min(result1,result2);
  }
  cout<<resu<<endl;


}