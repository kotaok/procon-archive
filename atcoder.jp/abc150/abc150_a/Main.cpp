#include<iostream>
#include<vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if ((x*500) >= y) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}