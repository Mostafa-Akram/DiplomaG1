#include <stdio.h>

int stringtoint(char *str, int size);
int strlength(char *str);
void intToString(int num, char *ch);
void stringRevrese(char *str);

int main() {
  char str[100] = {0};
  int number;

  printf("Enter number: ");
  scanf("%d", &number);

  intToString(number, str); /// str = &str
  stringRevrese(str);

  printf("%s", str);

  return 0;
}

// itoa // 123 ---> "123"
// atoi // "123" ---> 123

int stringtoint(char *str, int size) {

  int number = 0;

  for (int i = 0; i < size; i++) {
    if (str[i] >= '0' && str[i] <= '9') {
      number = ((number * 10) + str[i] - '0');
    }
  }

  return number;
}

int strlength(char *str) {
  int i = 0;

  for (; str[i]; i++)
    ;

  return i;
}

void intToString(int num, char *ch) {
  // num = 155 ----> ch[] = "155"
  int rem = 0;
  int i = 0;
  while (num) {
    rem = num % 10; ////1235 --> rem = 5
    ch[i] = rem + '0';
    num = num / 10; ////0
    i++;
  }
  ch[i] = '\0';
  printf("from int to string function %s \n", ch);
}

void stringRevrese(char *str) {
  int arrLength = strlength(str);
  char temp = 0;

  for (int i = 0; i < (arrLength / 2); i++) {
    temp = str[i];                   // temp = 5
    str[i] = str[arrLength - 1 - i]; // str[i=0]  = 1
    str[arrLength - 1 - i] = temp;   // arrLength = 4 , i = 0 str[3] = temp =5
                                     // i = 1; temp = str[1] =3
                                     // str[1] = str[4 - 1 - 1 =2]=2
                                     //  str[4 - 1 - 1 =2] = 3
  }
}
