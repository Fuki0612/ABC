#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N,K;
  long long int out=1,ans=1;
  cin >> N >> K;
  vector<long long int> A(N);

  for (int i = 0; i < N; i++){
    cin >> A[i];
  }

  for (int i=0;i<K;i++){
    ans *= 10;
  }

  for (int i=0;i<N;i++){
    if(out > (ans - 1) / A[i]){
      out = 1;
    } else {
      out *= A[i];
    }
  }

  cout << out << endl;

  return 0;
}