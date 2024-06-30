#include <stdio.h>

int main() {

  int num = 0;

  printf("Enter number: ");
  scanf("%d", &num);

  switch (num) {
  case 1 ... 10:
    printf("num is between 1 and 10\n");
    break;
  case 11 ... 20:
    printf("num is between 11 and 20\n");
    break;
  case 21 ... 30:
    printf("num is between 21 and 30\n");
    break;
  case 31 ... 40:
    printf("num is between 31 and 40\n");
    break;
  case 41 ... 50:
    printf("num is between 41 and 50\n");
    break;
  case 51 ... 60:
    printf("num is between 51 and 60\n");
    break;
  case 61 ... 70:
    printf("num is between 61 and 70\n");
    break;
  case 71 ... 80:
    printf("num is between 71 and 80\n");
    break;
  case 81 ... 90:
    printf("num is between 81 and 90\n");
    break;
  case 91 ... 100:
    printf("num is between 91 and 100\n");
    break;

  default:
    printf("out of range");
    break;
  }

  return 0;
}