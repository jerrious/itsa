#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    n *= 100;
    double t = n / 23.8;
    printf("%d", (int)ceil(t));
    return 0;
}