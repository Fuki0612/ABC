#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
using ll = long long;

int main() {
  ll H, W, N;
  cin >> H >> W >> N;
    

  vector<int> xs(N), ys(N);
  unordered_map<int, vector<int>> byX, byY;

  for (int i = 0; i < N; ++i) {
    cin >> xs[i] >> ys[i];
    byX[xs[i]].push_back(i);
    byY[ys[i]].push_back(i);
  }

  vector<char> alive(N, 1);
    
  int Q; cin >> Q;
  while (Q--) {
    int t, v; cin >> t >> v;
    ll removed = 0;

    if (t == 1) {
      auto it = byX.find(v);
      if (it != byX.end()) {
        for (int id : it->second)
          if (alive[id]) { alive[id] = 0; ++removed; }
        it->second.clear();
      }
    } else {
      auto it = byY.find(v);
      if (it != byY.end()) {
        for (int id : it->second)
          if (alive[id]) { alive[id] = 0; ++removed; }
        it->second.clear();
      }
    }
    cout << removed << endl;
  }
    
  return 0;
}