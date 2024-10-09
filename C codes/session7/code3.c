#include <stdio.h>

int main() {
  int arr[] = {6, 5, 4, 3, 2, 1};
  int arr2[] = {6, 5, 4, 3, 2, 1, 4, 5, 6, 8, 6, 9, 10, 4};

  int arrLen = sizeof(arr2) / sizeof(arr2[0]);
  int temp = 0;

  for (int i = 0; i < (arrLen - 1); i++) {
    for (int j = 0; j < (arrLen - 1); j++) {
      if (arr2[j] > arr2[j + 1]) {
        temp = arr2[j];
        arr2[j] = arr2[j + 1];
        arr2[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < arrLen; i++) {
    printf("%d ", arr2[i]);
  }

  return 0;
}