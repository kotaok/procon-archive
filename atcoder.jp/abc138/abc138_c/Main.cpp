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
  int n;
  cin>>n;
  vector<double> v;
  stack<double> L;
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    v.pb(j);
  }
  sort(all(v));
  for(int i=0;i<n;i++){
    if(L.empty()==1){
      L.push(v[i]);
    }
    else{
      double a,b;
      L.push(v[i]);
      a=L.top();
      L.pop();
      b=L.top();
      L.pop();
      L.push((a+b)/2);
    }
  }
  cout<<L.top();
  
}