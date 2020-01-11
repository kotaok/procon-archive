#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    int result = 0;
    int test = 0;
    vector<string> S;
    string SS, X;
    vector<int> T;
    int TT;
    bool B = true;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> SS >> TT;
        S.push_back(SS);
        T.push_back(TT);
    }

    cin >> X;

    for (int i = 0; i < N && B; i++) {
        test++;
        if (S.at(i) == X) {
            for (int j = test; j < N; j++) {
                result = result + T.at(j);
            }
            break;
            B = false;
        }
    }
    cout << result << endl;
}