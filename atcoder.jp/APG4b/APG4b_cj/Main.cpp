#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int sum=0;
  cin>>n;
  vector<int> l(n);
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    l.at(i)=j;
    sum+=j;
  }
  sum/=n;
  for(int i=0;i<n;i++){
    cout<<abs(sum-l.at(i))<<endl;
  }
  

}