#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n=0;
    int t;
    int loop=0;
    bool result = true;
    cin>>n;
    vector<int> l;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t%2==0){
            l.push_back(t);
        }
    }
    loop=l.size();
    for(int i=0;i<loop;i++) {
        if(l.at(i)%3==0 || l.at(i)%5==0){
        }
        else {
            result = false;
        }
    }
    if(result){
        cout<<"APPROVED";
    }
    else {
        cout<<"DENIED";
    }
}   
