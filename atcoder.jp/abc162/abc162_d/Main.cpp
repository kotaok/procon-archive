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
  lint n;
  lint r=0;
  lint g=0;
  lint b=0;
  lint count=0;
  string s;
  cin>>n>>s;
  for(lint i=0;i<s.size();i++){
    if(s[i]=='R'){
      r++;
    }
    else if(s[i]=='G'){
      g++;
    }
    else {
      b++;
    }
  }
  count=r*g*b;
  lint loop=n/2;
  lint num=2;
  for(lint e=1;e<=loop;e++){
    for(lint i=0;i<s.size()-num;i++){
      if(s[i]==s[i+e]||s[i]==s[(i+e*2)]||s[i+e]==s[(i+e*2)]){
      }
      else{
        count--;
      }
    }
    num+=2;
  }
  log(count);
  
}