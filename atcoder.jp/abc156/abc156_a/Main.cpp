#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int n, r,l;
    cin>>n>>r;
    if(n>=10){
        cout<<r;
    }
    else{
        l = 10-n;
        l = l * 100;
        cout<<r+l;
    }
}
