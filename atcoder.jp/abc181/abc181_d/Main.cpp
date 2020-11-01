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

int main(){
  string s;
  cin>>s;
  map<int,int> m;
  int num=s.size();
  vector<int> l;
  rep(i,num){
    m[s[i]]++;
    l.pb(s[i]);
  }
  bool f=false;
  lint hachi;
  if(num<2) hachi=8;
  else if(num<3) hachi=16;
  else hachi=104;

  while(hachi<1000){
    bool r=false;
    map<int,int> map2;
    string t=to_string(hachi);
    int num1=t.size();
    vector<int> list;
    rep(i,num1){
      map2[t[i]]++;
      list.pb(t[i]);
    }
    rep(i,num1){
      if(map2[list[i]]<=m[list[i]]) {
        r=true;
      }
      else{
        r=false;
        break;
      } 
    }
    if(r) {
      f=true;
      break;
    }
    hachi+=8;
  }
  if(f) cout<<"Yes";
  else cout<<"No";


}