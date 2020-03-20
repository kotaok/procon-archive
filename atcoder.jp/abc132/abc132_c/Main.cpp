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
  int n;
  cin>>n;
  vector<int> l;
  for (int i = 0; i < n; i++){
    int j;
    cin>>j;
    l.pb(j);
  }
  sort(all(l));
  int ans = l[l.size()/2]-l[l.size()/2-1];

  log(ans);
  

}
