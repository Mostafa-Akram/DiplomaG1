#include <stdio.h>
typedef unsigned char u8;

typedef struct {
  u8 name[30];
  int ID;
  int age;
  float GPA;
} student;

typedef struct threeDpoint {
  int x;
  int y;
  int z;
} threeDpoint;

int main() {

  student number1 = {"mostafa", 123, 25, 3.6};
  student number2 = {.GPA = 3.56, .ID = 124, .age = 28, .name = "mostafa"};

  //   struct threeDpoint axispoint;
  //   axispoint.x = 0;
  //   printf("x=%d , y=%d , z=%d", axispoint.x, axispoint.y, axispoint.z);

  return 0;
}