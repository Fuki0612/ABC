#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
  int N, M, Q;
  cin >> N >> M >> Q;

  vector<bool> full(N, false);
  vector<unordered_set<int>> admin(N);

  for (int i = 0; i < Q; i++){
    int type;
    cin >> type;
    int idx;
    cin >> idx;
    idx--; 

    if(type == 1) {
      int x;
      cin >> x;
      if(!full[idx])
        admin[idx].insert(x);
    }
    else if(type == 2){
      full[idx] = true;
      admin[idx].clear();
    }
    else if(type == 3){
      int x;
      cin >> x;
      if(full[idx] || admin[idx].count(x)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  
  return 0;
}