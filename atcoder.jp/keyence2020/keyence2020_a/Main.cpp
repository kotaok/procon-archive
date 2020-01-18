#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int H, W, N, MX;
    int result = 0;
    int i = 0;
    cin >> H >> W >> N;
    bool boo = true;
    MX = max(H, W);
    for (; N > result; i++) {
        result += MX;
    }
    cout << i << endl;
}