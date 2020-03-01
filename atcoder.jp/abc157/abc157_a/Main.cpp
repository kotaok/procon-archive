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
    int n;
    cin>>n;
    if(n%2==0){
        log(n/2);
    }
    else if(n!=1){
        log((n+1)/2);
    }
    else {
        log("1");
    }
}
