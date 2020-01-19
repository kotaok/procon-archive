#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    string a;
    string b;
    string A, B;
    int X, Y;
    cin >> a >> b;
    X = stoi(a);
    Y = stoi(b);  
    for (int i = 0; i < Y; i++) {
        A = A + a;
    }
    for (int i = 0; i < X; i++) {
        B = B + b;
    }
    if (X > Y) {
        cout << B << endl;
    }
    else if (X < Y) {
        cout << A << endl;
    }
    else {
        cout << A << endl;
    }
}