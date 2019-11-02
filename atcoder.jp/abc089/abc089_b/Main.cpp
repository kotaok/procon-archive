#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i, j;
  string h;
  j = 0;
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> h;
    if (h == "Y") {
      j = 1;
    }
  }
  if (j == 1) {
    cout << "Four" << endl;
  }
  else {
    cout << "Three" << endl;
  }
}
