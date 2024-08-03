#include <stdio.h>
#include<stdlib.h>

int main() {

  int x = 10;
  int y = 11;

  int arr2D[][2] = {{1, 2}, {3, 4}, {5, 6}}; // arr2D of int
  int(*Dptr)[2] = arr2D;                     // Double pointer controls 2D array
  Dptr[1][1] = 7;

  char *StrArr2D[][2] = {
      {"mohamed", "MostafaAkram"}, {"yousif", "fawzy"}, {"moafy", "moaz"}}; //2D array of const string
  char *(*StrDptr)[2] = StrArr2D;  //triple pointer to 2D array of const string or 3D array 

  printf("%c", StrDptr[0][1][3]);

  char *name = "mostafa"; // const string
  // int *ptr = NULL;            // NULL ptr to protect my code from wild
  // pointer
  void *ptr1;                 // void ptr
  char *wildPtr;              // wild pointer random adress for 1 byte in RAM
  int *wildPtr2;              // wild pointer random adresses for 4 byte in RAM
  int *const constPtr = &x;   // const pointer .. points to constant adress
  const int *ptrToconst = &x; // pointer to const int

  *constPtr = 15;
  ptrToconst = &y;

  //   ptr1 = name;
  //   printf("%c", *((char *)ptr1));
  //   printf("%d", *constPtr);

  return 0;
}