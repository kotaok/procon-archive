#include<iostream>
using namespace std;

int main() {
    int result = 0;
    string x;
    cin >> x;
    for (int i = 0; i < 3; i++) {
        if (x.at(i) == '1') {
            result++;
        }
    }
    cout << result << endl;
}