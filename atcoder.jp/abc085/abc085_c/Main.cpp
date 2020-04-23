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
  lint n,y;
  lint z=0;
  bool isyes=false;
  cin>>n>>y;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      z=n-i-j;
      if(10000*i+5000*j+1000*z==y&&z>=0){
        cout<<i<<" "<<j<<" "<<z;
        i=100000000;
        isyes=true;
        break;
        break;
      }
    }
  }
  if(isyes==false){
    cout<<"-1"<<" "<<"-1"<<" "<<"-1";
  }
}