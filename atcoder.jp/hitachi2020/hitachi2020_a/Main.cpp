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
  string s;
  int r;
  cin>>s;
  bool resu = true;
  if(s.size()%2!=0){
    resu = false;
  }
  else{
    r = s.size()/2;
    int count = 0;
    for(int i = 0;count<r;i=i+2){
      string H = s.substr(i,1);
      string I = s.substr(i+1,1);
      if(H=="h"&&I=="i"){

      }
      else {
        resu=false;
      }
      count++;
    }
  }
  if(resu){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }

  
}