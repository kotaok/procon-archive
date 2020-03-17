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
// 最大公約数gcd()
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;

int gcd(lint x, lint y){
	return y==0 ? x:gcd(y,x % y);
}

int main(){
  lint w,h,x,y;
  cin>>w>>h>>x>>y;
  cout<<fixed<<setprecision(6)<<double(w*h)/2.0<<" ";
  if(x+x==w&&y+y==h){
    cout<<"1";
  }
  else{
    cout<<"0";
  }
}
