#include <stdio.h>

int main() {

  long double x = 10;
  long double *ptr = &x;
  long double *ptr1 = &x;
  long double *ptr2 = &x;
  long double *ptr3 = &x;

  printf("size of long double = %zu\n", sizeof(long double));
  printf("size of long double = %zu\n", sizeof(ptr));

  printf("x = %d\n", x);

  x = 20;
  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);

  *ptr1 = 40;
  printf("x = %d\n", x);
  printf("*ptr = %d\n", *ptr);
  printf("*ptr1 = %d\n", *ptr1);
  printf("*ptr2 = %d\n", *ptr2);

  return 0;
}