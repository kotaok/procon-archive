#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define logfixed(x) cout<<fixed<<setprecision(10)<<x<<endl;
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
const double PIE = 3.14159265358979;
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
  int n,d;
  bool rs=false;
  cin>>n>>d;
  vector<int> l;
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    l.push_back(j);
  }
  for(int i=1;i<n;i++){
    if(n==1){
      cout<<"-1"<<endl;
      rs=true;
      break;
    }else if(l[i]-l[i-1]<=d){
      cout<<l[i]<<endl;
      rs=true;
      break;
    }
  }
  if(!rs){
    cout<<"-1"<<endl;
  }
}