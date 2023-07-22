#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

int main() {
  lint h,w;
  cin>>h>>w;
  lint sum=0;
  sum+=h/2*w;
  if(h%2==1){
    sum+=w-w/2;
  }
  log(sum);
}
