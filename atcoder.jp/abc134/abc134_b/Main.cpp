#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <string>
#include <queue>
#include <stack>
#include <math.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
int main(){
  int n,d,m;
  int count = 1;
  cin>>n>>d;
  m=d*2+1;
  for (int i=m;  i<n ; i=i+m)
  {
    count++;
  }
  log(count);
  


}