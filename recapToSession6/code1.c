#include <stdio.h>

int main() {

  int num1 = 0;
  int num2 = 0;
  int result = 0;

  printf("Enter first number \n");
  scanf("%d", &num1);
  printf("Enter second number \n");
  scanf("%d", &num2);

  // result = num1 * num2;  2+2   4+4 2+2+2+2
  for (int i = 0; i < num2; i++) {
    result = result + num1;
  }

  printf("Result = %d", result);

  return 0;
}
