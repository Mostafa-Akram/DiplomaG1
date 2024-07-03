
#include <stdio.h>

int main() {

  /*
   char c = 'X';
   short sh = 300;
   int i = 1000;
   long l = 50000;
   long long LL = 1000000000000;
   float f = 5.67;
   double d = 34.567;
   long double ld = 34.567;
  */

#define pii 3.14159

  unsigned int x = 4294960000;
  int y = 300;

  const double pi = 3.14159;

  unsigned char num1 = 255;
  unsigned char num2 = 250;

  printf("%u \n", x + y);               // imliplicit
  printf("%u \n", (unsigned int)x + y); // explicit

  printf("%f \n", num1 + 101.5 / num2);        // imliplicit
  printf("%f \n", (float)num1 * 101.5 / num2); // explicit
  printf("pii = %f \n", pii);  

  printf("douple = %zu \n", sizeof(double));
  printf("pi = %zu \n", sizeof(pi));
  printf("pii = %zu \n", sizeof(pii));
  printf("float = %zu \n", sizeof(float));

  return 0;
}
