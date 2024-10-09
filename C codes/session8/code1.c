#include <stdio.h>




int main() {

  int num1 = 0;
  while (1) {
    printf("enter number from 1 to infinity: ");
    scanf("%d", &num1);

    if (num1 > 0) {
      printf("number is %d \n", num1);
      break;
    } else if (num1 == 0) {
      return 1;
    } else {
      printf("negative number error!! \n");
      return 2;
    }
  }
  return 0;
}