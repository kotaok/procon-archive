#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    string s;
    string t;
    bool resu = true;
    cin>>s;
    for(int i=0;i<s.length();i++){
        t=s.substr(i,1);
        if(i%2==0){ //奇数
            if(t=="R"||t=="U"||t=="D"){

            }
            else{
                resu=false;
            }
        }
        else{
            if(t=="L"||t=="U"||t=="D"){

            }
            else {
                resu=false;
            }
        }
    }
    if(resu){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
