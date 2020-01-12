#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int A, B;
    int X = 0;
    cin >> A >> B;
    for (int i = 1; i < B;) {
        X++;
        i = i + (A - 1);
    }
    cout << X << endl;
}
