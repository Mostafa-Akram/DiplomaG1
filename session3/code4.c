#include <stdio.h>

int main() {
  // this program takes the GPA and prints if student is passed or failed

  int day = 0;

  printf("Enter day number: ");
  scanf("%d", &day);

  switch (day) {
  case 1:
    printf("saturday \n");
    break;
  case 2:
    printf("sunday \n");
    break;
  case 3:
    printf("monday \n");
    break;
  case 4:
    printf("tuesday \n");
    break;
  case 5:
    printf("wednesday \n");
    break;
  case 6:
    printf("thursday \n");
    break;
  case 7:
    printf("friday \n");
    break;
  default:
    printf("Invalid day number");
  }

  return 0;
}
