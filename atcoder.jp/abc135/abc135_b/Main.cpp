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

int main()
{
    int n,t;
    vector<int> l,r;
    cin>>n;
    rep(i,n){
        cin>>t;
        l.pb(t);
        r.pb(t);
    }
    sort(all(l));
    int count=0;

    rep(i,n){
        if(l.at(i)!=r.at(i)){
            count++;
        }
    }

    if(count>=3){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}
