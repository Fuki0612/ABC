#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  int N,neq0=0,neq1=1,neq2=2,neq3=3;
  cin >> N;
  vector<vector<char>> S(N,vector<char>(N));
  vector<vector<char>> S1(N,vector<char>(N));
  vector<vector<char>> S2(N,vector<char>(N));
  vector<vector<char>> S3(N,vector<char>(N));
  vector<vector<char>> T(N,vector<char>(N));
  for (int i=0;i<N;i++){
    for (int k=0;k<N;k++){
      cin >> S[i][k];
      S1[k][N-1-i] = S[i][k];
      S2[N-1-i][N-1-k] = S[i][k];
      S3[N-1-k][i] = S[i][k];
    }
  }
  for (int i=0;i<N;i++){
    for (int k=0;k<N;k++){
      cin >> T[i][k];
      if (S[i][k] != T[i][k]){
        neq0 ++;
      }
      if (S1[i][k] != T[i][k]){
        neq1 ++;
      }
      if (S2[i][k] != T[i][k]){
        neq2 ++;
      }
      if (S3[i][k] != T[i][k]){
        neq3++;
      }
    }
  }

  cout << min(min(neq0,neq1),min(neq2,neq3)) << endl;
  return 0;
}