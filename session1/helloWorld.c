#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  int sum = 0;

  printf("Enter first number \n");
  scanf("%d", &num1);

  printf("Enter second number \n");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("Sum = %d", sum);

  return 0;
}