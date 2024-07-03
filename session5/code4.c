
#include <stdio.h>

int main() {
  int passengers = 0;
  float gas = 0.0;
  int condition;
  float cost = 0.0;

  while (1 && cost != 15.5) {

    printf("Enter number of passengers: ");
    scanf("%d", &passengers);
    printf("Enter amount of gas: ");
    scanf("%f", &gas);

    condition = (passengers > 0);

    if (condition == 1) {
      cost = (gas + 1) / (passengers + 1);
    } else {
      cost = gas;
    }

    printf("%.2f\n", cost);

  
  }

  return 0;
}
