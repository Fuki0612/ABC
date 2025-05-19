#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> freq(M + 1, 0);

  for (int i = 0; i < N; i++) {
    cin >> A[i];
    freq[A[i]]++;
  }
  
  for (int i = 1; i <= M; i++) {
    if (freq[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  int count = 0;
  for (int i = N-1; i >= 0; i--) {
    freq[A[i]]--;
    count++;
    for (int j = 1; j <= M; j++) {
      if (freq[j] == 0) {
        cout << count << endl;
        return 0;
      }
    }  
  }
}