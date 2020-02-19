#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int n,t;
    int result = 0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            result+=a.at(i)*a.at(j);
        }
    }
    cout<<result;
}
