#include <stdio.h>

int main() {
  // this program takes the GPA and prints if student is passed or failed

  float gpa = 0;

  printf("Enter your GPA: ");
  scanf("%f", &gpa);

  if (gpa == 4.0) {
    printf("A+");
  } else if (gpa >= 3.7 && gpa < 4.0) {
    printf("A-");
  } else if (gpa >= 3.3 && gpa < 3.7) {
    printf("B+");
  } else if (gpa >= 3.0 && gpa < 3.3) {
    printf("B");
  } else if (gpa >= 2.7 && gpa < 3.0) {
    printf("B-");
  } else if (gpa >= 2.3 && gpa < 2.7) {
    printf("C+");
  } else if (gpa >= 2.0 && gpa < 2.3) {
    printf("C");
  } else if (gpa < 2.0 && gpa > 0.0) {
    printf("F");
  } else {
    printf("Invalid GPA");
  }

  return 0;
}
