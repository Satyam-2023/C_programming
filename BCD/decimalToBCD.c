#include "bcd.h"
void decimalToBCD(int num) {
    int bcdValue = 0, digit, shift = 0;

    printf("BCD representation of %d: ", num);

    while (num > 0) {
        digit = num % 10;
        bcdValue |= (digit << shift);
        shift += 4;
        num /= 10;
    }
  
    printBinary(bcdValue, 4);
    printf("\n");
}