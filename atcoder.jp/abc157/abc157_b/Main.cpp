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
    int t,n,j,k;
    bool one = false;
    bool two = false;
    bool thr = false;
    bool fou = false;
    bool fiv = false;
    bool six = false;
    bool sev = false;
    bool eig = false;
    bool nin = false;
    vector<int> b;
    map<int,int> bingo;
    for(int i=1;i<10;i++){
        cin>>t;
        bingo[t] = i;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>j;
        j=bingo[j];
        if(j!=0){
            b.pb(j);
            if(j==1){
                one = true;
            }
            if(j==2){
                two = true;
            }
            if(j==3){
                thr = true;
            }
            if(j==4){
              fou = true;  
            }
            if(j==5){
               fiv = true; 
            }
            if(j==6){
               six = true; 
            }
            if(j==7){
                sev = true;
            }
            if(j==8){
                eig = true;
            }
            if(j==9){
                nin = true;
            }

        }
    }
    sort(all(b));
    if(one&&two&&thr){
        log("Yes");
    }
    else if(fou&&fiv&&six){
        log("Yes");
    }
    else if(sev&&eig&&nin){
        log("Yes");
    }
    else if(one&&fou&&sev){
        log("Yes");
    }
    else if(two&&fiv&&eig){
        log("Yes");
    }
    else if(thr&&six&&nin){
        log("Yes");
    }
    else if(one&&fiv&&nin){
        log("Yes");
    }
    else if(thr&&fiv&&sev){
        log("Yes");
    }
    else {
        log("No");
    }
}

