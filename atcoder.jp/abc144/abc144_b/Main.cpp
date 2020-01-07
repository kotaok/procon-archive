#include<iostream>
using namespace std;

int main() {
    int N;
    bool Z = true;
    cin >> N;
    for (int i = 1; i < 10 && Z; i++) {
        for (int j = 1; j < 10 && Z; j++) {
            if (i * j == N) {
                cout << "Yes" << endl;
                Z = false;
                break;
                break;
            }
        }
    }
    if (Z) {
        cout << "No" << endl;
    }
    
}