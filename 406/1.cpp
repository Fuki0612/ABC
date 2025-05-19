#include <iostream>
#include <vector>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;

  if (A < C){
    cout << "No" << endl;
  } else if (A > C){
    cout << "Yes" << endl;
  } else if (B > D){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}