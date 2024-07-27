#include <stdio.h>

int main() {

  //! showMemory()
  int arr[] = {10, 20, 30};
  int var = 90;

  int *ptr;
  ptr = arr;

  printf("arr adress = %p\narr data = %d\n", &arr[0], arr[0]);
  printf("ptr adress = %p\nptr data = %d\n", ptr, *ptr);

  printf("arr adress = %p\narr data = %d\n", &arr[1], arr[1]);
  printf("ptr adress = %p\nptr data = %d\n", ptr + 1,
         *(ptr + 1)); // or &ptr[1], ptr[1]

  printf("arr adress = %p\narr data = %d\n", &arr[2], arr[2]);
  printf("ptr adress = %p\nptr data = %d\n", ptr + 2, *(ptr + 2));

  return 0;
}