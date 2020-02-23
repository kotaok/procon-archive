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
    int N,t;
    int c =0;
    int count =0;
    cin>>N;
    for(int i=1;i<=N;i++){
        t = i;
        c=0;
        while(t != 0){
            t = t / 10;
            c++;
        }
        if(c%2!=0){
            count++;
        }
    }
    log(count);
}
