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
  int n,q;
  cin>>n>>q;
  map<int,vector<int>> m;
  map<int,set<int>> m3;
  for(int i=0;i<q;i++){
    int query,number,box;
    cin>>query;
    if(query==1){
      cin>>number>>box;
      m[box].push_back(number);
      m3[number].insert(box);
    }else if(query==2){
      cin>>box;
      sort(m[box].begin(),m[box].end());
      for(int i=0;i<m[box].size();i++){
        cout<<m[box][i]<<" ";
      }
      cout<<endl;
    }else if(query==3){
      cin>>number;
      for(auto itr=m3[number].begin();itr != m3[number].end();++itr){
        int t=*itr; 
        cout<<t<<" ";
      }
      cout<<endl;
    }
  }
}

    