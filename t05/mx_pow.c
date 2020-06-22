#include <stdio.h>

double mx_pow(double n, unsigned int pow) {
  if (pow <= 0) {
    return 1;
  } 
  double result = 1;
  unsigned int i = 0;

  while(i < pow) {
    result *= n;
    i++;
  }
  return result;
}
