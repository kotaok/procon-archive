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
    lint l,r;
    lint result = 2000000000;
    cin>>l>>r;
    for(lint i=l;i<r;i++){
        for(lint j=l+1;j<=r;j++){
            result = min(result,i*j%2019);
            if(result==0){
                break;
            }
        }
        if(result==0){
            break;
        }
    }
    if(result < 2000000000){
        cout<<result;
    }
    else{
        cout<<l*r;
    }
}