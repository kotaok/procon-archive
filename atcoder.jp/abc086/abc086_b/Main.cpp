#include<iostream>
#include<vector>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b;
  c = a + b;
  int result = stoi(c);
  int i = 1;

  for (; i * i <= result; i++) {
      if (i * i == result) {
          cout << "Yes" << endl;
          break;
      }
  }
  if (i * i > result) {
    cout << "No" << endl;
    }
}