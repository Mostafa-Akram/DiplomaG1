#include <stdio.h>

int main() {

  unsigned char std_ids[] = {123, 124, 125, 126, 127, 128, 129, 130, 131, 132};
  unsigned char myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  unsigned char std_letters[] = {'A', 'B', 'C', 'D', 'E',
                                 'F', 'G', 'H', 'I', 'J'};

  float flArray[] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5, 10.5};

  printf("%d \n", std_ids[5]);
  printf("%d \n", std_ids[13]);

  printf("==================================== \n");

  printf("%d \n", myArray[5]);
  printf("%d \n", myArray[13]);

  printf("==================================== \n");

  printf("%c \n", std_letters[5]);
  printf("%c \n", std_letters[8]);

  printf("==================================== \n");

  printf("%.2f \n", flArray[5]);
  printf("%.2f \n", flArray[8]);

  return 0;
}