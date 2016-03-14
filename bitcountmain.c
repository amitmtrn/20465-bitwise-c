#include <stdio.h>

int bit_count(int x);

/**
 * main of bit_count
 */
int main() {
  int number;

  printf("Enter your number: ");
  scanf("%d", &number);
  printf("the number have %d bit!\n", bit_count(number));

  return 0;
}
