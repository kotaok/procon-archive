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
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
int main(){
  long double a,b,c;
  long double eps = 1.0E-14;
  cin>>a>>b>>c;
  a = sqrt(a);
  b = sqrt(b);
  c = sqrt(c);
  if(a+b+eps<c){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }

}
