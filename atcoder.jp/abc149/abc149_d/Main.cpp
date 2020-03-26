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


// <<fixed<<setprecision(6)<<


int gcd(lint x, lint y){
  return y==0 ? x:gcd(y,x % y);
}


int Combination(int n, int r){
  int num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}


int main(){
  int n,k;
  int rr,ss,pp = 0;
  map<char,int> m;
  m['r']=0;
  m['s']=0;
  m['p']=0;
  int r,s,p;
  cin>>n>>k;
  cin>>r>>s>>p;
  vector<char> l,a;
  string st;
  cin>>st;
  for(int i=0;i<st.size();i++){
    char j = st[i];
    if(j=='r'){
      l.pb(j);
      a.pb('p');
      m['p']++;
    }
    else if(j=='s'){
      l.pb(j);
      a.pb('r');
      m['r']++;
    }
    else if(j=='p'){
      l.pb(j);
      a.pb('s');
      m['s']++;
    }
  }

  for(int i=k;i<n;i++){
    char j=a[i];
    if(a[i-k]==j){
      if(i+k<n){
        if(a[i+k]==j){
        a[i]='x';
        }
      }
      m[j]--;
    }
  }
  int result = m['r']*r+m['s']*s+m['p']*p;
  cout<<result;
}