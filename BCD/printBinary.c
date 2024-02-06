#include "bcd.h"

void printBinary(int num, int bits) {
    for (int i = bits - 1; i >= 0; --i) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
}