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


int combi(int n, int r){
  int num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}


int main(){
  double n,m,sum;
  sum=0;
  cin>>n>>m;
  vector<double> l;
  rep(i,n){
    double j;
    cin>>j;
    sum+=j;
    l.pb(j);
  }
  double border = sum/(4*m);
  int count = 0;
  rep(i,n){
    if(l[i]>=border){
      count++;
    }
  }
  if(m<=count){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }


}