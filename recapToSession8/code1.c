#include <stdio.h>

void results(int, int);

int main() {

  int num1 = 0, num2 = 0;

  printf("Enter 2 Numbers: \n");
  scanf("%d %d", &num1, &num2);

  results(num1, num2);

  return 0;
}

void results(int x, int y) {
  int min = 0, max = 0;

  if (x > y) {
    max = x;
    min = y;
  } else if (x < y) {
    max = y;
    min = x;
  } else {
    max = min = x;
  }

  for (int i = min + 1; i <= max; i++) {
    printf("%d & %d = %d\n", min, i, min & i);
    printf("%d | %d = %d\n", min, i, min | i);
    printf("%d ^ %d = %d\n", min, i, min ^ i);
  }
}