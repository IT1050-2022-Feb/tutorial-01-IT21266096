/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub01, sub02;
  float average;

  printf("Enter mark_01 : ");
  scanf("%d", &sub01);

  printf("Enter mark_02 : ");
  scanf("%d", &sub02);

  average = (sub01 + sub02) / 2.0;

  printf("Average : %2.f\n", average);
  
  return 0;
}

