#include "bcd.h"

int main() {
    int decimalNumber;  
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);  
    decimalToBCD(decimalNumber);
    return 0;
}

