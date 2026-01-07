#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double c;
    scanf("%lf", &c);
    double f = c * 9 / 5 + 32;
    printf("%.1f", f);
    return 0;
}