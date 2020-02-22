#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>

using namespace std;

int main()
{
    long long n, t;
    int k;
    int count = 0;
    cin>>n>>k;
    if(n>2){
        for(int i = 0;t<n;i++) {
            t=pow(k,i);
            count++;
        }
        if(pow(k,count-1) == n){
            cout<<count;
        }
        else{
            cout<<count-1;
        }
    }

    else if(n==2){
        cout<<"2";
    }
    else{
        cout<<"1";
    }
}
