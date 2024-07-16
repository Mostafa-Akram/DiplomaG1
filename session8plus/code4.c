
/*
void
char
int
float ...etc

*/
#include <math.h>
#include <stdio.h>


//user defined function
void changeX(int *num /*  ----->100*/) { // num ----> 100
                                         // *num ---> 0

  printf("adress from function = %p \n", num);
  *num = sqrt(*num); // lib function


  printf("num from the func %d \n", *num);
}
