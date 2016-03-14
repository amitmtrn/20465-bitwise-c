#include <stdio.h>

int shift_bit(int number_of_bits);
int bit_count(int x);
void print_bit(int number);
int int_length();

/**
 * main of shift_bit also have bit_count for checking
 */
int main() {
  int number;

  printf("Enter your number: ");
  scanf("%d", &number);
  printf("the number have %d bit!\n", bit_count(number));
  print_bit(number);
  printf("the number shifted is %d!\n", shift_bit(bit_count(number)));
  print_bit(shift_bit(bit_count(number)));

  return 0;
}

/**
 * this function get the number of active bits and put them all at the end
 */
int shift_bit(int number_of_bits) {
  unsigned int number = -1; /* starting with all 1 */
  if(number_of_bits < int_length()) { /* it's illegal to shift bits in its length of the type */
    number >>= number_of_bits; /* add zeros at the end */
  } else {
    number = 0;
  }
  return ~number; /* return the oposite of the number */
}
