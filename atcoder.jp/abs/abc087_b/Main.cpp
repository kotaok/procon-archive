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
  int a,b,c,x;
  int count=0;
  cin>>a>>b>>c>>x;
  for(int i=0;i<=a;i++){
    for(int j=0;j<=b;j++){
      for(int k=0;k<=c;k++){
        if(x==500*i+100*j+50*k){
          count++;
        }
      }
    }
  }
  log(count);
}