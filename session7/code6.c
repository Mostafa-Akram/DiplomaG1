

#include <stdio.h>
#include <string.h>

int main() {

  //   0   '\0'  NULL

  char fName[50] = "Mostafa"; // = {'M', 'o', 's', 't','a', 'f', 'a' , '\0'}

  printf("Enter Your first name: ");
  // 1-  gets(fName);
  // 2-  scanf("%[^\n]s", fName);
  // 3-
  for (int i = 0; i < 50; i++) {
    scanf("%c", &fName[i]);
    if (fName[i] == '\n') {
      fName[i + 1] = 0;
      break;
    }
  }

  printf("%s", fName);

  return 0;
}