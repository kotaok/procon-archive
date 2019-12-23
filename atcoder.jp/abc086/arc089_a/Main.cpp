#include<iostream>
#include<vector>
using namespace std;

int main() {
  int N, t, x, y;
  int a, b, c;
  bool result = true;
  cin >> N;
  
  vector<int> point;
  for (int i = 0; i < N; i++) {
      cin >> t >> x >> y;
      point.push_back(t);
      point.push_back(x);
      point.push_back(y);
  }

  int j = 0;
  for (int i = 0; i < N; i++) {
      a = i + j;
      b = i + j + 1;
      c = i + j + 2;
      if ((point[a] - (point[b] + point[c])) % 2 != 0 || point[a] < (point[b] + point[c])) {
          result = false;
          cout << "No" << endl;
          break;
      }
      j = j + 2;
  }

  if (result) {
      cout << "Yes" << endl;
  }
  
}