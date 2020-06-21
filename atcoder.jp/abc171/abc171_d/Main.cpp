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
  lint n;
  lint sum=0;
  cin>>n;
  vector<lint> l;
  map<lint,lint> m;
  rep(i,n){
    int j;
    cin>>j;
    l.pb(j);
    m[j]++;
    sum+=j;
  }
  lint q;
  cin>>q;
  vector<pair<lint,lint>> li;
  rep(i,q){
    pair<lint,lint> d;
    cin>>d.first>>d.second;
    li.pb(d);
  }
  rep(i,q){
    lint b,c;
    b=li[i].first;
    c=li[i].second;
    lint num=m[b];
    m[b]=0;
    m[c]+=num;
    sum-=b*num;
    sum+=c*num;
    cout<<sum<<endl;
  }


}