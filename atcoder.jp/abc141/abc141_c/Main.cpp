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
  map<int,int> b;
  lint n,k,q,r;
  cin>>n>>k>>q;
  r=k-q;
  for(lint i=0;i<n;i++){
    b[i]=r;
  }
  for(lint i=0;i<q;i++){
    lint j;
    cin>>j;
    b[j-1]++;
  }
  for(lint i=0;i<n;i++){
    if(b[i]<1){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }
  }
}