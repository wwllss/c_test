#include <stdio.h>
#include "temperature.h"
#include "temperature.h"

void transformFahr2celsius(int lower, int upper, int step);

void transformCelsius2Fahr(int lower, int upper, int step);

int main(int argc, char const *argv[]) {
  // printf("Hello World!\n");
  transformFahr2celsius(0, 300, 10);
  transformCelsius2Fahr(-100, 100, 10);
  return 0;
}

void transformFahr2celsius(int lower, int upper, int step) {
  int fahr = lower;
  while (fahr <= upper) {
    printf("fahr is %d,celsius is %d\n", fahr, fahr2celsius(fahr));
    fahr += step;
  }
}

void transformCelsius2Fahr(int lower, int upper, int step) {
  int fahr = lower;
  while (fahr <= upper) {
    printf("celsius is %d,fahr is %d\n", fahr, celsius2fahr(fahr));
    fahr += step;
  }
}
