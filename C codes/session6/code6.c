#include <stdio.h>

int main() {
  int arr[100] ;

  int arrLength = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < arrLength; i++) {
    printf("arr[%d] = %d \n", i, arr[i]);
  }

  return 0;
}