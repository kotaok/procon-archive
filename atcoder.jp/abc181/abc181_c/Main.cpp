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
  int n;
  cin>>n;
  vector<pair<int,int>> l;
  rep(i,n){
    pair<int,int> c;
    cin>>c.first>>c.second;
    l.pb(c);
  }
  sort(all(l));
  bool f=false;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        if(i==j||j==k||k==i) continue;
        else{
            double ab=sqrt(pow(l[j].first-l[i].first,2)+pow(l[j].second-l[i].second,2));
            double ac=sqrt(pow(l[k].first-l[i].first,2)+pow(l[k].second-l[i].second,2));
            double bc=sqrt(pow(l[k].first-l[j].first,2)+pow(l[k].second-l[j].second,2));
          if(fabs(ab+ac-bc)<=DBL_EPSILON*fmax(1,fmax(fabs(ab+ac),fabs(bc)))||fabs(ab+bc-ac)<=DBL_EPSILON*fmax(1,fmax(fabs(ab+bc),fabs(ac)))||fabs(ac+bc-ab)<=DBL_EPSILON*fmax(1,fmax(fabs(ac+bc),fabs(ab)))) f=true;
        }
      }
    }
  }
  if(f) cout<<"Yes";
  else cout<<"No";

}