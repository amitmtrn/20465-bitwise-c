#include <stdio.h>

int get_last_bit(unsigned int number);

/**
 * this function is counting the number of active bits in an integer
 * @params number - the number we want to check active bits on
 * @returns int the number of bits
 */
int bit_count(unsigned int number) {
  int counter = 0; /* the times there was a 1 bit in the number */

  while (number) { /* while the number is not zero (000...000) */
    counter += get_last_bit(number); /* bits are 1 or 0 so add to the counter the last one */
    number >>= 1; /* shift one bit right */
  }

  return counter; /* return the counter */
}
