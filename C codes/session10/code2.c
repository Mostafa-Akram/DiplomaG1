#include <stdio.h>

void func(int);
void executeFunc(void (*cb)(int), int n);
void add3(int n);

int main() {
  int x = 9;
  void (*callBack)(int);
  callBack = add3;

  executeFunc(callBack, x);

  return 0;
}

void executeFunc(void (*cback)(int), int n) { cback(n); }