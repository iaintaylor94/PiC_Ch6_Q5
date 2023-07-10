// Program to reverse the digits of a number

#include <stdio.h>

int main(void) {

  int number, right_digit;

  printf ("Enter your number.\n");
  scanf ("%i", &number);

  // Take in to account negative input
  if (number < 0) {
    number *= -1;
    
    do {
      right_digit = number % 10;
      printf ("%i", right_digit);
      number = number / 10;
    }
    while (number != 0);
  
    printf ("-\n");
  }
  else {
    do {
      right_digit = number % 10;
      printf ("%i", right_digit);
      number = number / 10;
    }
    while (number != 0);

    printf ("\n");
  }

  printf ("\n");
  
  return 0;
}