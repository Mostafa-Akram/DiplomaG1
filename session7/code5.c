

#include <stdio.h>
#include <string.h>

int main() {

  //   0   '\0'  NULL

  char fName[] = "Mostafa"; // = {'M', 'o', 's', 't','a', 'f', 'a' , '\0'}
  char sName[] = {'A', 'k', 'r', 'a', 'm'};
  char thirdName[3];

  int fNameSize = sizeof(fName) / sizeof(fName[0]);
  int sNameSize = sizeof(sName) / sizeof(sName[0]);

  printf("Enter Your first name: ");
  scanf("%s", fName);

  printf("Enter Your second name: ");
  scanf("%s", sName);

  printf("Enter Your third name: ");
  scanf("%s", thirdName);

  printf("%s \n", fName);
  printf("%s \n", sName);
  printf("%s \n", thirdName);

  printf("%d\n", strlen(fName));
  printf("%d\n", strlen(sName));
  printf("%d\n", strlen(thirdName));

  return 0;
}