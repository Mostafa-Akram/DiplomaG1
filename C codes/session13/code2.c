#include <stdio.h>

typedef struct {
  char name[30];
  int model;
  int speed;
} car;

int main() {

  car cars[5]; // static array of structs of car

  for (int i = 0; i < 5; i++) {
    scanf("%s", cars[i].name);
    scanf("%d", &cars[i].model);
    scanf("%d", &cars[i].speed);
  }

  for (int i = 0; i < 5; i++) {
    printf("%s ", cars[i].name);
    printf("%d ", cars[i].model);
    printf("%d \n", cars[i].speed);
  }

  return 0;
}