#include <stdio.h>

unsigned long factorial(int n) {
    unsigned long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    unsigned long fact = factorial(n);
    printf("factorial of %d is %lu\n", n, fact);
    return 0;
}
