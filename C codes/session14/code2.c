#include <stdio.h>

typedef struct {
  char name[30];
  int age;
} data;

int main() {

  data students[10];
  data *ptr;

  for (int i = 0; i < 3; i++) {
    scanf("%s", students[i].name);
    scanf("%d", &students[i].age);
  }

  for (int i = 0; i < 3; i++) {
    printf("student number %d   %s\n", i + 1, students[i].name);
    printf("student number %d   %d\n", i + 1, students[i].age);
  }
  printf("enter data again for std 3 and std 4 \n");
  ptr = students;

  scanf("%s",
        (ptr + 2)->name); //  you can replace  "* ptr . name"   by " ptr->name "
  scanf("%d", &(*(ptr + 2)).age);
  scanf("%s", (*(ptr + 3)).name);
  scanf("%d", &(*(ptr + 3)).age);

  for (int i = 0; i < 5; i++) {
    printf("student number %d   %s\n", i + 1, students[i].name);
    printf("student number %d   %d\n", i + 1, students[i].age);
  }
  return 0;
}