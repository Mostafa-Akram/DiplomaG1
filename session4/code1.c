#include <stdio.h>

int main() {

  char character;

  printf("Enter capital letter: ");
  scanf("%c", &character);

  switch (character) {
  case 'A' ... 'Z':                        //case 'A' ... 'Z' ----> case 65 ... 90:
    printf("%c",character + ('a' - 'A')); // note you can replace 32 by ('a' - 'A')
    break;
  case 'a' ... 'z':
    printf("%c", character - 32);
    break;
  default:
    printf("Invalid input");
  }

  return 0;
}

// %b -->wronge


