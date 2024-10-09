#include <stdio.h>
#include <string.h>

int strlength(char *str);
void strinput(char *str, int size);

int main() {

  char Name[50];
  int strletters = 0;
  int strSize = sizeof(Name) / sizeof(Name[0]);

  printf("Enter Your Name \n");
  strinput(Name, strSize);

  //   scanf("%[^\n]s", &Name); // gets(Name);

  printf("%s", Name);

  // strletters = strlength(Name);
  // printf("number of string letters is %d \n", strletters);

  return 0;
}

int strlength(char *str) {
  //   printf("str adress = %p \n", str);
  //   printf("%s\n", str);
  //   printf("%c in adress of %p \n", *(str + 7), str + 7);

  int i = 0;
  for (; str[i]; i++) { // '\0' = 0
  }

  return i;
}

void strinput(char *str, int size) {

  for (int i = 0; i < size; i++) {
    scanf("%c", &str[i]);
    if (str[i] == '\n') {
      break;
    }
  }
}
