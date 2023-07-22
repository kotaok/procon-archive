
    if (s.find(l[x]) != s.end()) {
      s.erase(l[x]);
    }
    l[x] = y;

    int r = s.size();
    int cnt = 0;
    for (auto it