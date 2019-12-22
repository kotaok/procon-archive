#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    string s, t;
    cin >> s >> t;

    char x, y;
    string result;

    for (int i = 0; i < N; i++) {
        x = s.at(i);
        result.push_back(x);
        y = t.at(i);
        result.push_back(y);
    }
    cout << result << endl;
}