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
    int A,B,e,t,result;
    double E,T;
    double i=1;
    bool TB = false;
    cin>>A>>B;
    for(;i<=B*10000;i++){
      E=i*0.08;
      T=i*0.1;
      e=E;
      t=T;
      if(e==A&&t==B&&e!=0&&t!=0){
        TB=true;
        break;
      }
    }
    result=i;
    if(TB){
      cout<<i;
    }
    else{
      cout<<"-1";
    }
}