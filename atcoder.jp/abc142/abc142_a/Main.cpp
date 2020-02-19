#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int n;
    double resu;
    cin>>n;
    if(n%2==0){
        resu = (double)n / 2 / (double)n;
    }
    else{
        resu = (n/2+1)/double(n);
    }
    cout<<resu;
}
