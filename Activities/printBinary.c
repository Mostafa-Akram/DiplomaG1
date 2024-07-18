#include <stdio.h>

void binary(int num);

int main() {

  int num = 0;

  printf("Enter integer number: ");
  scanf("%d", &num);

  binary(num);

  return 0;
}

void binary(int num) {

  for (int i = 7; i >= 0; i--) {
    printf("%d", ((num >> i) & 1));
    if ((i % 8) == 0) {
      printf("  ");
    }
  }
}