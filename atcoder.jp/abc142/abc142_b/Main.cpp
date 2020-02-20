#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>

using namespace std;

int main()
{
    int n,k,t;
    int count=0;
    vector<int> h;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>t;
        h.push_back(t);
    }
    for(int i=0;i<n;i++){
        if(h.at(i)>=k){
            count++;
        }
    }
    cout<<count;
}
