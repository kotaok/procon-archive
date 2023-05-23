#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

// 素因数分解
// 460 = 2^2 x 5 x 23 の場合
// 返り値は {{2, 2}, {5, 1}, {23, 1}}
vector<pair<long long, long long>> prime_factorize(long long N) {
  // 答えを表す可変長配列
  vector<pair<long long, long long>> res;

  // √N まで試し割っていく
  for (long long p = 2; p * p <= N; ++p) {
    // N が p で割り切れないならばスキップ
    if (N % p != 0) {
      continue;
    }

    // N の素因数 p に対する指数を求める
    int e = 0;
    while (N % p == 0) {
      // 指数を 1 増やす
      ++e;

      // N を p で割る
      N /= p;
    }

    // 答えに追加
    res.emplace_back(p, e);
  }

  // 素数が最後に残ることがありうる
  if (N != 1) {
    res.emplace_back(N, 1);
  }
  return res;
}

int main() {
  int h, w;
  cin >> h >> w;
  int shar = 0;
  vector<vector<int>> c(h + 1);
  vector<int> ans(min(h, w));
  vector<int> sharNum(min(h, w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char f;
      cin >> f;
      c[h].push_back(f);
      if (f == '#') {
        shar++;
      }
    }
  }
  log(shar);
  int sz = min(h, w);
  sharNum[0] = 5;
  for (int i = 1; i < sz; i++) {
    sharNum[i] = sharNum[i - 1] + 4;
  }
}
