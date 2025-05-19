#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N,sum=0;  
  cin >> N;

  vector<int> A(N+1);
  for (int i=1;i<=N;i++){
    cin >> A[i];
    if(i % 2 != 0){
      sum += A[i];
    }
  }

  cout << sum << endl;
  return 0;
}