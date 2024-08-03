#include <stdio.h>
#include <stdlib.h>

int *DMAMallocint(int size);

int main() {
  //! showMemory()
  int stdnum = 0;
  int *stdarr = NULL;

  printf("enter the number of students: ");
  scanf("%d", &stdnum);

  stdarr = DMAMallocint(stdnum);

  for (int i = 0; i < stdnum; i++) {
    printf("enter student number %d \n", i + 1);
    scanf_s("%d", &stdarr[i]);
  }

  for (int i = 0; i < stdnum; i++) {
    printf("enter student number %d = %d marks \n", i + 1, stdarr[i]);
  }

  free(stdarr);
  return 0;
}

int *DMAMallocint(int size) {
  int *ptr = (int *)malloc(size * sizeof(int));
  return ptr;
}

// calloc func
// realloc func
