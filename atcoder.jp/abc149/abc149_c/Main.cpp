#include<iostream>
using namespace std;

int main() {
    int X;
    bool N = true;
    cin >> X;

    if (X == 2) {
        cout << 2 << endl;
        N = false;
    }

    for (;N; X++) {
        if (X % 2 == 0) {
            continue;
        }
        else {
            for (int i = 3; i <= X; i = i + 2) {
                if  (X == i) {
                    cout << X << endl;
                    N = false;
                    break;
                    break;
                }
                else if (X % i == 0) {
                    break;
                }
            }
        }
    }
}