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
    string s,a,b,c;
    bool r = true;
    cin>>s;
    a=s.substr(0,1);
    b=s.substr(1,1);
    c=s.substr(2,1);
    if(a==b&&b==c){
      r = false;
    }
    if(r){
      cout<<"Yes";
    }
    else{
      cout<<"No";
    }



}