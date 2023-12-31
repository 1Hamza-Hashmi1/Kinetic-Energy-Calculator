#include <stdio.h>

//calculate kinnetic energy from users specified variables
double
calcKE(double mass, double velocity)
{
  double KE;
  double raisedTo;
  raisedTo = velocity*velocity;
  KE = 0.5*mass*raisedTo;
  return(KE);
}

//the main function, where everything happens
int
main(void)
{
  //variable decleration
  double mass;
  double velocity;
  double KE;

  //takes input from the user
  printf("Enter mass in kg: ");
  scanf("%lf", &mass);
  printf("Enter velocity in m/s: ");
  scanf("%lf", &velocity);

  //calls on the calcKE function to calculat kinnetic energy
  KE = calcKE(mass, velocity);

  //displays the calculated kinnetic energy to the user
  printf("The kinnetic energy according to user values is: %.2lf", KE);

  return(0);
}
