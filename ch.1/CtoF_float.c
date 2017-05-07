#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;      /* lower limit of temperature scale */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */

  printf("Cels|Fahrenheit\n---------------\n");

  celsius = lower;
  while (celsius <= upper) {
      fahr = celsius / (5.0/9.0) + 32.0; // Same formula: fahr = (9.0/5.0) * celsius + 32.0;
      printf("%3.0f %6.1f\n", celsius, fahr);
      celsius = celsius + step;
  }
  return 0;
}
