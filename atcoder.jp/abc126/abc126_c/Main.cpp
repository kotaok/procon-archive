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


int main(){
  long double n,k,t,c,i;
  long double r;
  bool TEST = false;
  vector<long double> L;
  cin>>n>>k;
  for(i=1;i<=n;i++){
    t=i;
    c=0.0;
    for(lint j=0;t<k;j++){
      t*=2;
      c++;
    }
    r=1.0/n*pow(0.5,c);
    L.pb(r);
  }
  long double sum = accumulate(all(L),0.0);
  cout<<fixed<<setprecision(12)<<sum;
}
