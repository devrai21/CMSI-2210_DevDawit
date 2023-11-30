#include <stdio.h>
#include <assert.h>

extern int findGCD(int a, int b);

int main() {
    int num1 = 3113041662;
    int num2 = 11570925;
    int gcd;

    gcd = findGCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);


    return 0;
}
