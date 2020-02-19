#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int a,b,r;
    cin>>a>>b;
    r=a-b*2;
    if(r>=0){
        cout<<r;
    }
    else{
        cout<<"0";
    }
}
