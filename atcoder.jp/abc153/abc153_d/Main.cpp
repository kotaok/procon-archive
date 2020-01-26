#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    long long H, N;
    long long result = 0;
    long long i = 2;
    cin >> H;
    N = H;
    if (N > 1) {
        N = N / 2;
        result++;
        for (; N > 1; i = i * 2) {
            N = N / 2;
            result = result + i;
        }
        cout << result + i << endl;
    }
    else {
        cout << 1 << endl;
    }
    
}   
