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
  int n,m;
  cin>>n>>m;
  Graph g(n);
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    g[a].pb(b);
    g[b].pb(a);
  }

  vector<int> dist(n,-1);
  queue<int> que;
  dist[0]=0;
  que.push(0);

  while(!que.empty()){
    int x=que.front();
    que.pop();

    for(int nv:g[x]){
      if(dist[nv]!=-1) continue;
      dist[nv]=dist[x]+1;
      que.push(nv);
    }
  }
  cout<<"Yes"<<endl;
  for(int i=1;i<n;i++){
    int co=g[i].size();
    int MIN=100000;
    int numb=0;
    for(int j=0;j<co;j++){
      // MIN=min(MIN,dist[g[i][j]]);
      if(MIN>dist[g[i][j]]){
        MIN=dist[g[i][j]];
        numb=g[i][j];
      }
    }
    numb++;
    cout<<numb<<endl;
  }
  // for (int v=0;v<n;++v) cout<<v<<":"<<dist[v]<<endl;
  
  
}