#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int H, N, a;
    int result = 0;
    vector<int> A;

    cin >> H >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        result = result + a;
    }
    if (H <= result) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}   