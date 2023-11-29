#include <stdio.h>
#include <assert.h>

int swapLittleBig(int n) { // shifts n to the least significant position and applies it bitwise
  return (((n >> 24) & 0x000000ff) 
        | ((n >>  8) & 0x0000ff00) 
        | ((n <<  8) & 0x00ff0000) 
        | ((n << 24) & 0xff000000));
}

int main() { // gets the input
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  // Swap
  int swapped = swapLittleBig(num);

  // Ensures correct answer (for testing)
  // assert(swapped == __builtin_bswap32(num));
  printf("%d (0x%08x) with swapped endianness is: %d (0x%08x)!\n", num, num, swapped, swapped);
 
  return 0;
}