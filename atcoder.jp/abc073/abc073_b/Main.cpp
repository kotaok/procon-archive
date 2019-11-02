#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,l,r,x;
  cin >> N;
  for (i = 0; i < N; i++) {
	cin >> l >> r;
    x += r - l + 1;
  }
  cout << x << endl;
}
