#include <stdio.h>
#include<math.h>


void numSumPrint(int, int);
int sum2nums(int x, int y);
void changeX(int *num);

int main() {

  int x = 0; // adress of x = 100
  int y = 0;
  int sum = 0;

  printf("Enter x number: ");
  scanf("%d", &x);

  //numSumPrint(x, y); // call by value
                     // function call (x,y)
  //sum = sum2nums(x, y);
  // printf("sum = %d", sum);

  changeX(&x); // call by reference or call by adress

  printf("adress from main = %p \n", &x);
  printf("num from the main %d \n", x);

  return 0;
}

void numSumPrint(int i, int y) {
  int sum = 0;
  sum = i + y;
  printf("sum = %d", sum);
}

// function
int sum2nums(int x, int y) { return x + y; }
