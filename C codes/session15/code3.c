
#include "code3.h"
// conditional compilation

#ifndef alarm
#include <stdio.h>
#define alarm 1
char x = 10;
#endif

int main() {

  if (alarm == 0) {
    printf("alarm disabled");

  } else if (alarm == 1) {
    printf("alarm disabled after 10 min");

  } else {
    printf("alarm Enabled");
  }

#if alarm == 0
  printf("alarm disabled");
#elif alarm == 1
  printf("alarm disabled after 10 min");
#else
  printf("alarm Enabled");
#endif

  return 0;
}