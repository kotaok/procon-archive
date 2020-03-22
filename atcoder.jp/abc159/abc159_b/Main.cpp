#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <string>
#include <queue>
#include <stack>
#include <math.h>
#include <cmath>
#include <numeric>
#include <iomanip>

#define log(x) cout << x << endl
#define pb push_back
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
typedef long long lint;
using namespace std;

// <<fixed<<setprecision(6)<<

int gcd(lint x, lint y)
{
    return y == 0 ? x : gcd(y, x % y);
}

int main()
{
    string s, a, b;
    int l, l2;
    bool isyes = true;
    cin >> s;
    l = s.size();
    a = s.substr(0, (l - 1) / 2);
    b = s.substr(((l + 3) / 2) - 1);
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - 1 - i])
        {
            isyes = false;
            break;
        }
    }

    if (isyes)
    {
        l = a.size();
        for (int i = 0; i < l / 2; i++)
        {
            if (a[i] != a[l - 1 - i])
            {
                isyes = false;
                break;
            }
        }
        for (int i = 0; i < l / 2; i++)
        {
            if (b[i] != b[l - 1 - i])
            {
                isyes = false;
                break;
            }
        }
    }
    if(isyes){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
