#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <string>
#include <queue>
#include <stack>
#include <math.h>
#include <cmath>
#include <numeric>
#include <iomanip>


#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;


// <<fixed<<setprecision(6)<<


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
  int n,m;
  cin>>n>>m;
  vector<int> h;
  map<int,int> map;
  vector<pair<int,int> > l;
  rep(i,n){
    int j;
    cin>>j;
    h.pb(j);
  }
  rep(i,n){
    map[i]=0;
  }
  rep(i,m){
    int a,b;
    pair<int,int> t;
    cin>>a>>b;
    lint h1,h2;
    h1=h[a-1];
    h2=h[b-1];
    if(h1>h2){
      map[b-1]=-1;
    }
    else if(h1<h2){
      map[a-1]=-1;
    }
    else if(h1==h2){
      map[a-1]=-1;
      map[b-1]=-1;
    }
  }
  lint co=0;
  for(int i=0;i<map.size();i++){
    if(map[i]==0){
      co++;
    }
  }
  cout<<co;
}