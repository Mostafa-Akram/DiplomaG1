#include <stdio.h>

int main() {

  // Nested Loop

  int i = 0;
  int j = 0;

  for (i = 1; i <= 5; i++) {

    for (j = 1; j <= 3; j++) {
      if (i == 4) {
        break;
      }
      printf("Hello i=%d j=%d \n", i, j);
    }
  }

  return 0;
}