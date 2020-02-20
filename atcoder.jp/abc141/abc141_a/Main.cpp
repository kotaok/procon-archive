#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s=="Sunny"){
        cout<<"Cloudy";
    }
    else if(s=="Cloudy"){
        cout<<"Rainy";
    }
    else{
        cout<<"Sunny";
    }
}
