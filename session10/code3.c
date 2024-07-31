#include <stdio.h>

int main() {

  int x = 10; // &x = 100h
  int *ptr;
  ptr = &x;

  *ptr = 30;

  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

  int **ptrPtr;

  ptrPtr = &ptr;
  **ptrPtr = 70;

  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);
  printf("**ptrPtr = %d\n", **ptrPtr);

  return 0;
}