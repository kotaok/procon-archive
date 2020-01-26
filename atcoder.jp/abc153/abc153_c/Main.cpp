#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int N, K, a;
    vector<long long> HP;
    long long result = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> a;
        HP.push_back(a); 
    }
    sort(HP.begin(), HP.end());
    if (HP.size() > K) {
        for (int i = 0; i < K; i++) {
            HP.pop_back();
        }
        int num = HP.size();
        for (int i = 0; i < num; i++) {
            result += HP.at(i);
        }
        cout << result << endl; 
    }
    else {
        cout << 0 << endl;
    }
}   
