#include <stdio.h>

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int i = 0;

  for (i = 1; i <= 10; i++) {

    printf("arr[%d] = %d\n", i, arr[i - 1]);
  }

  /*
   printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[3] = %d\n", arr[3]);
    printf("arr[4] = %d\n", arr[4]);
    printf("arr[5] = %d\n", arr[5]);
    printf("arr[6] = %d\n", arr[6]);
    printf("arr[7] = %d\n", arr[7]);
    printf("arr[8] = %d\n", arr[8]);
    printf("arr[9] = %d\n", arr[9]);
  */

  return 0;
}