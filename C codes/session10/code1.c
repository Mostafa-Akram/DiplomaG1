#include <stdio.h>

int add(int, int);
int sub(int, int);
void printHello(int n);

int main() {

  int op = 0;
  int (*ptrFunc)(int, int);
  void (*ptrFunc2)(int);
  ptrFunc2 = &printHello;

  (*ptrFunc2)(5);

  return 0;
}

int add(int num1, int num2) { return num1 + num2; }

int sub(int num1, int num2) { return num1 - num2; }

void printHello(int n) {
  for (int i = 0; i < n; i++) {
    printf("Hello World\n");
  }
}
