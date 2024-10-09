#include <stdio.h>

int main() {

  struct student {
    char name[30];
    int ID;
    int age;
    float GPA;
  };
  struct car {
    char name[30];
    char color[30];
    int number;
  };

  struct car car1;
  struct car car2;
  struct car car3;

  printf("please enter car data\n");

  scanf("%s", car1.name);
  scanf("%s", car1.color);
  
  car2 = car3 = car1;

  printf("please enter cars number \n");
  scanf("%d", &car1.number);
  scanf("%d", &car2.number);
  scanf("%d", &car3.number);



  printf("car 1 name: %s,  car 1 color %s, car 1 number %d \n", car1.name,
         car1.color, car1.number);
  printf("car 2 name: %s,  car 2 color %s, car 2 number %d \n", car2.name,
         car2.color, car2.number);
  printf("car 3 name: %s,  car 3 color %s, car 3 number %d \n", car3.name,
         car3.color, car3.number);

  return 0;
}