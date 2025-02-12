#include <stdio.h>

extern int number[];

int main() {
  for (int i = 0; i < 10; i++) {
    printf("number  =  %d \n", number[i]);
  }

  return 0;
}