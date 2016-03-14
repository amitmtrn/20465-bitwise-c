#include <stdio.h>

int int_length();

/**
 * get the last bit from the right
 * @params number - the number we want the get his last bit
 * @return int the last bit value
 */
int get_last_bit(unsigned int number) {
  return number & 01;
}

/**
 * print the bits of a number
 * @params number - the number we want to print his bits
 * @returns void - print the number of bits (doesn't return anything)
 */
void print_bit(unsigned int number) {
  int i = 0;

  while (i < int_length()) {
    printf("%d", get_last_bit(number));
    number >>= 1;
    i++;
  }
  printf("\n");
}

/**
 * get the length of integer
 * @returns int - the number of bits in an integer
 */
int int_length() {
  unsigned int max = -1;
  int counter = 0; /* the times there was a 1 bit in the number */

  while (max) { /* while the number is not zero (000...000) */
    counter ++;
    max >>= 1; /* shift one bit right */
  }

  return counter; /* return the length of int */
}
