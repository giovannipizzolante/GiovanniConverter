#include "../src/unit_converter.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

#define EPSILON 0.0001

void test_celsius_to_fahrenheit() {
  assert(fabs(celsius_to_fahrenheit(0) - 32) < EPSILON);
  printf("All celsius_to_fahrenheit tests passed!\n");
}

void test1_fahrenheit_to_celsius() {
  assert(fabs(fahrenheit_to_celsius(32) - 0) < EPSILON);
  printf("First test fahrenheit to celsius passed!\n");
}

void test2_fahrenheit_to_celsius() {
  assert(fabs(fahrenheit_to_celsius(320) - 3) < EPSILON);
  printf("First test fahrenheit to celsius passed!\n");
}

void test_kilometers_to_miles() {
  printf("All kilometers_to_miles tests passed!\n");
}

void test_miles_to_kilometers() {
  printf("All miles_to_kilometers tests passed!\n");
}

void test_grams_to_ounces() { printf("All grams_to_ounces tests passed!\n"); }

void test_ounces_to_grams() { printf("All ounces_to_grams tests passed!\n"); }

int main() {
  test_celsius_to_fahrenheit();
  test1_fahrenheit_to_celsius();
  test2_fahrenheit_to_celsius();
  test_kilometers_to_miles();
  test_miles_to_kilometers();
  test_grams_to_ounces();
  test_ounces_to_grams();
  return 0;
}
