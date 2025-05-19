#include <iostream>
#include <vector>
using namespace std;

int main() {
  string T,U;
  bool flag;
  cin >> T >> U;

  for (int i=0;i<T.length();i++){
    flag = true;
    for (int k=0;k<U.length();k++){
      if (T[i+k] != U[k] && T[i+k] != '?'){
        flag = false;
        break;
      }
    }
    if (flag){
      cout << "Yes" << endl;
      return 0;
    } 
  }
  cout << "No" << endl;
  return 0;
}