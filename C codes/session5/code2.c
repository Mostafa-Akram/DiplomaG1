#include <stdio.h>

int main() {

  int toNum = 0;
  int sum = 0;
  int i = 1;

  for (; i <= 5; i++) {

    printf("loop 1 i = %d \n", i);
  }

  printf("out of loop i = %d \n", i);

  for (i = 1; sum < 100; i++) {

    sum = sum + i;
    printf("loop 2 i = %d \n", i);
    printf("sum = %d \n", sum);
  }
  printf("sum = %d \n", sum);
  printf("final  i = %d \n", i);

  return 0;
}