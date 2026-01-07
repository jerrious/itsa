#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
