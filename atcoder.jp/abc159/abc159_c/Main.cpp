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
  int l;
  cin>>l;
  if(l%3==0){
      double i = double(l)/3.0;
      i=i*i*i;
      cout<<fixed<<setprecision(12)<<i;
  }
  else {
    double a,b,c;
    a=double(l)/3.0;
    b=double(l)/3.0;
    c=double(l)/3.0;
    cout<<fixed<<setprecision(12)<<a*b*c;
  }
}
