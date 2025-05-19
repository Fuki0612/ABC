#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 4) { cout << 0 << endl; return 0; }

    vector<long long int> P(N);
    for (long long int &x : P) cin >> x;

    vector<int> s;
    s.reserve(N - 1);
    for (int i = 0; i < N - 1; ++i)
        s.push_back(P[i] < P[i + 1] ? +1 : -1);

    struct Run { int sign, len; };
    vector<Run> runs;
    for (int v : s) {
      if (runs.empty() || runs.back().sign != v)
        runs.push_back({v, 1});
      else
        ++runs.back().len;
    }

    long long int ans = 0;
    for (size_t i = 0; i + 2 < runs.size(); ++i) {
      if (runs[i].sign == +1 && runs[i + 1].sign == -1 && runs[i + 2].sign == +1) {
          ans += 1LL * runs[i].len * runs[i + 2].len;
      }
    }

    cout << ans << endl;
    return 0;
}
