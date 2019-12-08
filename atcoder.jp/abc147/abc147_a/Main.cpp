#include<iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    if (x + y + z >= 22) {
        cout << "bust" << endl;
    }
    else {
        cout << "win" << endl;
    }

}