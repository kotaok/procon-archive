#include <bits/stdc++.h>
#define log(x) cout << x << endl
#define logfixed(x) cout << fixed << setprecision(10) << x << endl;
#define all(x) (x).begin(), (x).end()
using namespace std;
using lint = long long;
using Graph = vector<vector<int>>;

struct UnionFind {
  vector<int> size, parents;
  UnionFind() {}
  UnionFind(int n) { // make n trees.
    size.resize(n, 0);
    parents.resize(n, 0);
    for (int i = 0; i < n; i++) {
      makeTree(i);
    }
  }
  void makeTree(int x) {
    parents[x] = x; // the parent of x is x
    size[x] = 1;
  }
  bool isSame(int x, int y) { return findRoot(x) == findRoot(y); }
  void unite(int x, int y) {
    x = findRoot(x);
    y = findRoot(y);
    if (size[x] > size[y]) {
      parents[y] = x;
      size[x] += size[y];
    } else {
      parents[x] = y;
      size[y] += size[x];
    }
  }
  int findRoot(int x) {
    if (x != parents[x]) {
      parents[x] = findRoot(parents[x]);
    }
    return parents[x];
  }
  int treeSize(int x) { return size[findRoot(x)]; }
};

int main() {
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (a != b and !uf.isSame(a, b)) {
      uf.unite(a, b);
    }
  }
  int k;
  cin >> k;
  vector<int> kx(k);
  vector<int> ky(k);
  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;

    kx[i] = x;
    ky[i] = y;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    UnionFind adduf(n);
    adduf = uf;
    int p, q;
    cin >> p >> q;
    p--;
    q--;
    adduf.unite(p, q);
    bool is = true;

    for (int j = 0; j < k; j++) {
      if (adduf.isSame(kx[j], ky[j])) {
        is = false;
        break;
      }
    }
    if (is) {
      log("Yes");
    } else {
      log("No");
    }
  }
  return 0;
}
