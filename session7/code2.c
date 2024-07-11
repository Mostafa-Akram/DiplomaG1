#include <stdio.h>

int main() {
  int i = 0;
  int j = 0;
  int k = 0;

  int arr3D[6][2][3] = {{{1, 2, 3}, {4, 5, 6}},
                        {{7, 8, 9}, {10, 11, 12}},
                        {{}},
                        {{}},
                        {{}},
                        {{}}};

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 2; j++) {
      for (k = 0; k < 3; k++) {
        printf("%d  ", arr3D[i][j][k]);
      }
      printf(" xxxxxxx ");
    }
    printf("\n");
  }

  return 0;
}