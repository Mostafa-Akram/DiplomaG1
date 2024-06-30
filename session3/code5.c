#include <stdio.h>

int main() {
  // this program takes the GPA and prints if student is passed or failed

  char character;

  printf("Enter capital letter: ");
  scanf("%c", &character);

  switch (character) {
  case 'A':
    printf("a\n");
    break;
  case 'B':
    printf("b\n");
    break;
  case 'C':
    printf("c\n");
    break;
  case 'D':
    printf("d\n");
    break;
  case 'E':
    printf("e\n");
    break;
  case 'F':
    printf("f\n");
    break;
  case 'G':
    printf("g\n");
    break;
  default:
    printf("Invalid input\n");
  }

  return 0;
}
