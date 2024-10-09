#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("arr[5] = %d\n", arr[5]);  // 6

  arr[5] = 20;

  printf("arr[5] = %d\n", arr[5]); //20

  return 0;
}