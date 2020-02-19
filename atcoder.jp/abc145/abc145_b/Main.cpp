#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int n;
    string s, s1, s2;
    cin >> n >> s;
    if (n % 2 == 0) {
        s1 = s.substr(0, n / 2);
        s2 = s.substr(n / 2 , n / 2);
        if(s1==s2){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
    else {
        cout<<"No";
    }
}
