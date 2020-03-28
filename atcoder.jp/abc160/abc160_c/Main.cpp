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
  int k,n;
  int h;
  cin>>k>>n;
  vector<int> a(n),b;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(all(a));
  for(int i=0;i<n;i++){
    if(i==0){
      int g=a[n-1]-a[0];
      b.pb(g);
    }
    else{
      int g=k-a[i]+a[i-1];
      b.pb(g);
    }
  }
  sort(all(b));
  cout<<b[0];

}