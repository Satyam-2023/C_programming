#include <stdio.h>

int main() {
    float a,b,c;
    float avg;
    printf("\nenter 3 numbers");
    scanf("%f%f%f",&a,&b,&c);
    avg = (a+b+c)/3;
    printf("\naverage  of numbers is%f",avg);
    return 0;
}
