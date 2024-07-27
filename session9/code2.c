#include <stdio.h>

int main() {

  //! showMemory()
  int arr[] = {10, 20, 30};
  int var = 90;

  char *ptr;
  ptr = arr;

  printf("size of ptr = %zu", sizeof(ptr));

  return 0;
}