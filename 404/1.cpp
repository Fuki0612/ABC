#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
  string S;

  cin >> S;

  bool flag=true;
  for (char i='a';i<='z';i++){
    flag = true;
    for (int k=0;k<S.length();k++){
      if (S[k] == i){
        flag = false;
        break;
      }
    }
    if (flag){
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}