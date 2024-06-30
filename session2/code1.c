int main() {
  unsigned int number1 = 0;
  unsigned int number2 = 0;

  printf("Enter first number \n");
  scanf("%d", &number1);

  printf("Enter second number \n");
 

  printf("number1 = %d \n", number1);
  printf("number2 = %d \n", number2);

  if (number1 > 255) {
    number1 = 255;
  }
  if (number2 > 255) {
    number2 = 255;
  }

  printf("number1 = %d \n", number1);
  printf("number2 = %d \n", number2);
  printf("Sum = %d \n", number1 + number2);

  return 0;
}