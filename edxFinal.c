#include <stdio.h>

int main() {

  char stdNames[30][50];
  int grades[30] = {0};
  int ranks[30] = {0};
  int stdNum = 0;

  scanf("%d", &stdNum);

  for (int i = 0; i < stdNum; i++) {
    scanf("%d", &grades[i]);
  }

  for (int i = 0; i < stdNum; i++) {
    scanf("%s", stdNames[i]);
  }

 

  return 0;
}