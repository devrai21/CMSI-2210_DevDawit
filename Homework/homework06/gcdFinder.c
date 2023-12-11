#include <stdio.h>
#include <assert.h>

//extern int findGCD(int a, int b);
extern long findGCD(long a, long b);

int main() {
    // int num1 = 3113041662;
    // int num2 = 11570925;
    // int gcd;
    long num1 = 3113041662;
    long num2 = 11570925;
    long gcd;

    gcd = findGCD(num1, num2);
//    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);
    printf("The GCD of %ld and %ld is: %ld\n", num1, num2, gcd);


    return 0;
}
