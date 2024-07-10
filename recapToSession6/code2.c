#include <stdio.h>

int main() {

  int num1 = 0;
  int check = 0;
  int counter = 0;

  printf("Enter first number \n");
  scanf("%d", &num1);


  while (num1 != 0) {
    check = num1 & 1;
    if (check) {
      counter++;
    }
    num1 = num1 >> 1;
  }

  if (counter == 1) {
    printf("it is base 2 number ");
  } else {
    printf("it is not base 2 number ");
  }

  return 0;
}

// 1 2 4 8 16 32 64 128 256 512 1024 ....