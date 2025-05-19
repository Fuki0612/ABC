#include <iostream>
using namespace std;

int main() {
  int R,X;
  
  cin >> R >> X;

  if (X == 1) {
    if (1600 <= R && R <= 2999){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  } else if (X == 2) {
    if (1200 <= R && R <= 2399){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  } else {
    printf("No\n");
  }
  return 0;
}