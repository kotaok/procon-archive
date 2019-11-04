#include <bits/stdc++.h>
using namespace std;

int main() {
  
  //入力処理
  int H, W;
  string X;
  cin >> H >> W;
  W += 2;
  
  //上#
  for (int i = 0; i < W; i++) {
	cout << "#";
  }
  cout << endl;
  
  //文字列
  for (int i = 0; i < H; i++) {
    cin >> X;
    cout << "#";
    cout << X;
    cout << "#" << endl;
  }
  
  //下#
  for (int i = 0; i < W; i++) {
    cout << "#";
  }
  cout << endl;
  
}
