#include<iostream>
#include<vector>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    long long a, b, result;
    a = A;
    b = B;
    bool abc = true;
    long long j, k = 1;


    for (long long i = 0; abc; i++) {
        if (a > b) {
            j++;
            b = B * j;
        }
        else {
            k++;
            a = A * k;
        }

        if (a == b) {
            cout << a << endl;
            abc = false;
            break;
        }
    }
}
