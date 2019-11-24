#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  int x = 0;
  int y = 1;
  for (int i = 0; i < 5; i++) {
	if (data.at(x) == data.at(y)) {
      cout << "YES" << endl;
      break;
    }
    
    x++;
    y++;
    
    if(y == 5) {
      cout << "NO" << endl;
      break;
    }
  }    
}
