#include <stdio.h>

int main() {

  int x = 10;
  int y = 11;
  char *name = "mostafa"; // const string

  int *ptr = NULL;          // NULL ptr to protect my code from wild pointer
  void *ptr1;               // void ptr
  char *wildPtr;            // wild pointer random adress for 1 byte in RAM
  int *wildPtr2;            // wild pointer random adresses for 4 byte in RAM
  int *const constPtr = &x; // const pointer .. points to constant adress
  const int *ptrToconst = &x;

  *constPtr = 15;
  ptrToconst = &y;


  //   ptr1 = name;
  //   printf("%c", *((char *)ptr1));
  //   printf("%d", *constPtr);
  printf("%d", *ptrToconst);

  return 0;
}