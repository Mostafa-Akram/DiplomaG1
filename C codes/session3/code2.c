int main() {
  // this program takes the GPA and prints if student is passed or failed

  float gpa = 0;
  printf("Enter your GPA: ");
  scanf("%f", &gpa);

  if (gpa > 1.999) {
    printf("You have passed \n");
  } else {
    printf("You have failed \n");
  }
  

  return 0;
}