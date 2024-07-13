#include <stdio.h>

void /*does not return*/ print(void /*does not take*/) {
  printf(" Hello World !! \n");
  printf(" Hello World !! \n");
}

void /*does not return*/ numMultiBy10(int x /*takes int number*/) {
  x = x * 10;
  printf("x = %d \n", x);
}

int main() {

  // print();
  numMultiBy10(7);

  return 0;
}