#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>
#include <random>

using namespace std;

int main() {
    int N = 0;
    int c = 0;
    vector<int> A, B;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> c;
        A.push_back(c);
    }
    sort(A.begin(), A.end());
    B = A;
    A.erase(unique(A.begin(), A.end()), A.end());
    if (A == B) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}   
