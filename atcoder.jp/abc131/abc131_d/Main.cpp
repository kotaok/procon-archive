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
  int n;
  vector<pair<int,int>> tasks;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    tasks.emplace_back(b,a);
  }
  sort(all(tasks));
  int sum = 0;
  bool isyes=true;
  for (auto v : tasks){
    sum+=v.second;
    if(sum > v.first){
      isyes=false;
      break;
    }
  }
  if(isyes){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
}
