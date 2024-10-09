#include <stdio.h>

// Seprated Nested struct
struct personal {
  int age;
  char name[30];
};

struct member {
  int category[5];
  struct personal memberdata;
};

int main() {

  struct member members[40];

  printf(" member data 1- category 2- age 3-name");

  scanf("%d", &members[0].category[0]);
  scanf("%d", &members[0].memberdata.age);
  scanf("%s", &members[0].memberdata.name);

  printf("name: %s \nage: %d \ncategory: %d \n", members[0].memberdata.name,
         members[0].memberdata.age, members[0].category[0]);

  return 0;
}