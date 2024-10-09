#include <stdio.h>

// You are planning a car trip so you post on a carpooling
// website in order to share the cost of the trip.
// If you have 0 passengers the carpool site does not charge
// anything and you alone pay the full cost of the trip. If you have
// 1 or more passengers the carpool site adds a $1 fee to the
// cost of the trip and evenly divides the total cost ($1 fee + gas)
// among the passengers and you. You want to write a program that calculates
// the cost you have to pay. The program
// should read the number of passengers (an integer) and
// the cost of gas for the
// trip (a decimal number). The program should then print the cost that
// you have to pay (a decimal number) with 2 digits after the decimal point.
#include <stdio.h>

int main() {
  int passengers = 0;
  float gas = 0.0;
  int condition;
  float cost = 0.0;

  scanf("%d", &passengers);
  scanf("%f", &gas);

  condition = (passengers > 0);

  if (condition == 1) {
    cost = (gas + 1) / (passengers + 1);
  } else {
    cost = gas;
  }

  printf("%.2f", cost);
  return 0;
}
//////////////////////////////////////////////////////////////////////

// edx solution

#include <stdio.h>
int main() {
  int nbPassengers = 0;
  double totalCost = 0.0;
  scanf("%d %lf", &nbPassengers, &totalCost);
  int alone = nbPassengers == 0;
  if (alone) {
    printf("%.2lf", totalCost);
  } else {
    totalCost = totalCost + 1; // car pooling site fees
    printf("%.2lf", totalCost / (nbPassengers + 1));
  }
  return 0;
}
