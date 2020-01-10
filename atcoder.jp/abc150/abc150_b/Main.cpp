#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    int result = 0;
    string S, test1, test2, test3, check;
    cin >> N >> S;
    for (int i = 0; i < N - 2; i++) {
        test1 = S.at(0 + i);
        test2 = S.at(1 + i);
        test3 = S.at(2 + i);
        check = test1 + test2 + test3;
        if (check == "ABC") {
            result = result + 1;
        }
    }
    cout << result << endl;
}