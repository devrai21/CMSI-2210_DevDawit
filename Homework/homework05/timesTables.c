#include <stdio.h>
#include <stdlib.h>

void timesTable(int n) {
    int i;
    for(int i=2; i<= n; i++){
        printf("%d * %d = %d \n", n, i, n*i);
    }
}

int main () {
    int i;
    printf("Enter a number:");
    scanf("%d", &i);
    timesTable(i);
    return 0;
}