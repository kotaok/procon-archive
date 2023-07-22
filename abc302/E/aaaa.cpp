#include <bits/stdc++.h>
using namespace std;
using lint = long long;

int main() {
  int n;
  cin >> n;
  vector<string> list = {".,!? ", "abc",  "def", "ghi", "jkl",
                         "mno",   "pqrs", "tuv", "wxyz"};
  for (int i = 0; i < n; i++) {
    string ans = "";
    string s;
    cin >> s;
    int si = s.size();
    char tmp = '0';
    int count = -1;
    for (int j = 0; j < si; j++) {
      if (s[j] == '0') {
        if (tmp == '0') {
          tmp = '0';
          count = -1;
        } else {
          int listsize = list[int(tmp) - 49].size();
          ans += list[int(tmp) - 49].at(count % listsize);
          tmp = '0';
          count = -1;
        }
      } else {
        tmp = s[j];
        count++;
      }
    }
    cout << ans << endl;
  }
}
