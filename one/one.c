#include <stdio.h>
#include "temperature.h"

void transformFahr2celsius(float lower, float upper, float step);

void transformCelsius2Fahr(float lower, float upper, float step);

int main(int argc, char const *argv[]) {
  // printf("Hello World!\n");
  transformFahr2celsius(0, 300, 10);
  transformCelsius2Fahr(-100, 100, 10);
  return 0;
}

void transformFahr2celsius(float lower, float upper, float step) {
  float fahr = lower;
  while (fahr <= upper) {
    printf("fahr is %.1f,celsius is %.1f\n", fahr, fahr2celsius(fahr));
    fahr += step;
  }
}

void transformCelsius2Fahr(float lower, float upper, float step) {
  float fahr = lower;
  while (fahr <= upper) {
    printf("celsius is %.1f,fahr is %.1f\n", fahr, celsius2fahr(fahr));
    fahr += step;
  }
}
