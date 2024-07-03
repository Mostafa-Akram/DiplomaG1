#include <stdio.h>

int main() {

  int password = 1234;
  int input;
  int i = 0;

  do {

    printf("Enter password: ");
    scanf("%d", &input);

    if (input == password) {
      printf("Correct \n");
      break;
    }

    i++;

    if (i == 3) {
      printf("Wrong password \n");
    }

  } while (i < 3);

  return 0;
}