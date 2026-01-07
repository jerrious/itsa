#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int max_prime(int n) {
    int max = -1;
    for (int i = 2; i < n; i++) {
        int is_prime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            max = i;
        }
    }
    return max;
}
    

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);
    printf("%d", max_prime(t));
    return 0;
}
