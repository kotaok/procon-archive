#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <string>
#include <queue>
#include <stack>
#include <math.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
int main(){
  int a,b,m,t,result;
  vector<int> A,B,M;
  cin>>a>>b>>m;
  for(int i=0;i<a;i++){
    cin>>t;
    A.pb(t);
  }
  for(int i=0;i<b;i++){
    cin>>t;
    B.pb(t);
  }
  int x,y,c;
  for(int i=0;i<m;i++){
    cin>>x>>y>>c;
    M.pb(x);
    M.pb(y);
    M.pb(c);
  }
  int mina = *min_element(all(A));
  int minb = *min_element(all(B));
  result = mina+minb;
  int testresult;
  int count=0;
  int aa,bb,cc;
  for(int i=0;i<m;i++){
    aa = M.at(count);
    bb = M.at(count+1);
    cc = M.at(count+2);
    testresult = A.at(aa-1) + B.at(bb-1) - cc;
    result = min(result,testresult);
    count=count+3;
  }
  cout<<result;
}