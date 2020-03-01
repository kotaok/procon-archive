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
    int n,m,s,t;
    int result;
    int a = 999;
    int b = 999;
    int c = 999;
    bool resu = true;
    cin>>n>>m;
    rep(i,m){
        cin>>s>>t;
        if(s==1 && t!=0){
            if(a==999 || a == t) {
                a=t;
            }
            else {
                resu = false;
            }
        }
        else if(s==2){
            if(b==999 || b == t) {
                b=t;
            }
            else {
                resu = false;
            }
        }
        else if(s==3){
            if(c==999 || c == t) {
                c=t;
            }
            else {
                resu = false;
            }
        }
        else if(s==1 && n==1){
            if(a==999 || a == t) {
                a=t;
            }
        }
        else {
            resu = false;
        }
    }
    if(resu) {
        if(a==999){
            a=0;
        }
        if(b==999){
            b=0;
        }
        if(c==999){
            c=0;
        }
        if(n==3){
            result = a*100+b*10+c;
        }
        if(n==2){
            result = a*10+b;
        }
        if(n==1){
            result = a;
        }
        if(n==3){
            if(result<100){
                result=result+100;
            }
        }
        if(n==2){
            if(result<10){
                result=result+10;
            }
        }
        log(result);
    }
    else {
        cout<<"-1";
    }

}
