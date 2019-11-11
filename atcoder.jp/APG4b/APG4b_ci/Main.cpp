#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, result;
  cin >> A >> B >> C;
  int max0 = max(A, B);
  int max1 = max(max0, C);
  int min0 = min(A, B);
  int min1 = min(min0, C);
  result = max1 - min1;
  cout << result << endl;
}
