#include <stdio.h>

int main() {

  //   0   '\0'  NULL

  char fName[] = {'M', 'o', 's', 't', 'a', 'f', 'a'};
  char sName[50] = {'A', 'k', 'r', 'a', 'm'};

  int fNameSize = sizeof(fName) / sizeof(fName[0]);
  int sNameSize = sizeof(sName) / sizeof(sName[0]);

  


  for (int i = 0; i < fNameSize; i++) {
    printf("%c", fName[i]);
  }
  printf("   ");

  for (int i = 0; i < sNameSize; i++) {
    printf("%c", sName[i]);
  }

  return 0;
}