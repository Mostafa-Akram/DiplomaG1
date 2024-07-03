#include <stdio.h>

int main() {

  int i = 0;
  int num = 5;
  int sum = 0;

  while (i <= num && sum != 10) {
    
    sum = sum + i;
    i++;
  }

  printf("sum = %d \n", sum);
  printf("i = %d \n", i);

  return 0;
}