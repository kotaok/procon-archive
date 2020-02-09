#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>
#include <random>

using namespace std;

int main() {
    string ball1, ball2, check;
    int b1 = 0;
    int b2 = 0;
    cin >> ball1 >> ball2;
    cin >> b1 >> b2 >> check;

    if (check == ball1) {
        b1--;
    }
    else {
        b2--;
    }

    cout << b1 << " " << b2;
}   
