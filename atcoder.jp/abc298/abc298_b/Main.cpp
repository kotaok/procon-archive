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

lint gcd(lint x, lint y){
  return y==0 ? x:gcd(y,x % y);
}

lint digsum(int n) {
  lint res = 0;
  while(n > 0) {
    res += n%10;
    n /= 10;
  }
  return res;
}

lint dignum(int n) {
  lint res = 0;
  while(n > 0) {
    res++;
    n /= 10;
  }
  return res;
}

lint stringcount(string s, char c) {
  return count(s.cbegin(), s.cend(), c);
}

lint lcm(lint x, lint y){
  return x/ gcd(x, y) * y;
}

lint combi(lint n, lint r){
  lint num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main(){
  int n;
  cin>>n;
  vector<vector<int>> a(n,vector<int>(n));
  vector<vector<int>> b(n,vector<int>(n));
  vector<vector<int>> c(n,vector<int>(n));
  bool r=false;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>b[i][j];
    }
  }
  bool result=false;


  for(int k=0;k<4;k++){
    bool r=true;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        c[i][j]=a[n-1-j][i];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(c[i][j]==1){
          if(b[i][j]==0){
            r=false;
          }
        }
      } 
    }
    if(r){
      result=true;
      break;
    }
    a=c;
  }
  if(result){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
    