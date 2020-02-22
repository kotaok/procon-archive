#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <map>
#include <math.h>

using namespace std;

int main()
{
    int N,t;
    int sum = 0;
    int result = 0;
    int resultf = 99999999;
    vector<int> X;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>t;
        sum+=t;
        X.push_back(t);
    }
    sum = sum / N;
    for(int j=sum-20;j<sum+20;j++){
        result = 0;
        for(int i=0;i<N;i++){
            result+=pow(X.at(i)-j,2);
        }
        resultf = min(resultf, result);
    }
    
    cout<<resultf;
}
