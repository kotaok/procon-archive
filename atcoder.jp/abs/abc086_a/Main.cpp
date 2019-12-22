#include<iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  
  if (x*y % 2 == 0) {
    cout << "Even" << endl;
  }
  else {
    cout << "Odd" << endl;
  }
  return 0;
}
  
  
