#include <bits/stdc++.h>
using namespace std;

int main() {
  string o;
  int N, A, i, k;
  cin >> N >> A;
  
  for (i = 0; i < N; i++) {
    cin >> o >> k;
    if (o == "+") {
      A += k;
    }
    else if (o == "-") {
      A -= k;
    }
    else if (o == "*") {
      A *= k;
    }
    else if (o == "/" && k != 0) {
      A /= k;
    }
    else {
      cout << "error" << endl;
      break;
    }
    cout << i + 1 << ":" << A << endl; 
  }
}
