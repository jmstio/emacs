#include <stdio.h>

int main() {
  int foo[2][2][2] = {
    {{0,1},{2,3}},
    {{4,5},{6,7}}
  };

  printf("%d",foo[0][1][1]);
}
