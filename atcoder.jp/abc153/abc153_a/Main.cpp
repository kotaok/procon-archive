#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int H, A;
    int result = 0;
    cin >> H >> A;
    for (; H > 0; result++) {
        H = H - A;
    }
    cout << result << endl;
}