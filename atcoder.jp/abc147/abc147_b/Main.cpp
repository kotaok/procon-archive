#include<iostream>
using namespace std;

int main() {

    //入力
    string word;
    int i;
  	int result = 0;
    cin >> word;
    i = word.size();

    //判定回数の決定
    if (i % 2 == 1) {
        i = (i - 1) / 2;
    }
    else {
        i = i / 2;
    }

    //判定
    int k = word.size();
    k--;
    for (int j = 0; j < i; j++) {
        if (word[j] != word[k]) {
            result++;
        }
        k--;
    }

    //出力
    cout << result << endl;
}
