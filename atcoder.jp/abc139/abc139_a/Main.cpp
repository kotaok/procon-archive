#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    string S, T;
    int N = 0;
    cin >> S >> T;
    for (int i = 0; i < 3; i++) {
        if (S.at(i) == T.at(i)) {
            N++;
        }
    }
    cout << N << endl;
}
