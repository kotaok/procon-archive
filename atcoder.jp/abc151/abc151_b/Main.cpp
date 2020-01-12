#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    float N, K, M, test;
    float sum = 0;
    float result = 0;
    int RESULT = 0;
    cin >> N >> K >> M;
    for (int i = 0; i < N - 1; i++) {
        cin >> test;
        sum = sum + test;
    }

    
    for (int i = K; (sum + K) / N > M; K--) {
    }
    
    if (K < 0) {
        cout << 0 << endl;
    }
    else if ((sum + K) / N < M) {
        cout << -1 << endl;
    }
    else {
        cout << K << endl;
    }
}   
