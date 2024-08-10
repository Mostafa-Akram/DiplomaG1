#include <stdio.h>

// Embedded nested struct

typedef struct {
  int category;
  struct personal {
    int age;
    char name[30];
  } memberdata;
} member;

int main() {

  member Drmostafa;

  printf(" member data 1- category 2- age 3-name");

  scanf("%d", &Drmostafa.category);
  scanf("%d", &Drmostafa.memberdata.age);
  scanf("%s", &Drmostafa.memberdata.name);

  printf("name: %s \nage: %d \ncategory: %d \n", Drmostafa.memberdata.name,
         Drmostafa.memberdata.age, Drmostafa.category);

  return 0;
}