#include<iostream>
#include<vector>
#include <algorithm>
#include <functional>
#include <random>

using namespace std;

int main() {
    string S, result;
    int num = 0;
    cin >> S;
    num = S.size();
    for (int i = 0; i < num; i++) {
        result += "x";
    }
    cout << result;
}   
