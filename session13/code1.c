#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char name[50];
  int score;
  int rank;

} student; // 60 byte

int main() {

  int size = 0;

  printf("enter number of students \n");
  scanf("%d", &size); // 10 students

  student *students =
      malloc(size * sizeof(student)); // dynamic allocation for array of struct
                                      // for ex. 10 * 60 = 600 bytes

  for (int i = 0; i < size; i++) {
    printf("enter student number %d data name then score \n", i + 1);
    scanf("%s", students[i].name);
    scanf("%d", &students[i].score);
  }

  student temp;

  // bubble sorting

  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (students[j].score > students[i].score) {
        temp = students[i];
        students[i] = students[j];
        students[j] = temp;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    students[i].rank = i + 1;
  }

  for (int i = 0; i < size; i++) {
    printf("student number %d  name is %s \n", i + 1, students[i].name);
    printf("student number %d score is %d \n", i + 1, students[i].rank);
  }

  return 0;
}

// dynamic memory allocation for array of struct
// bubble sorting
// edx final project using structs