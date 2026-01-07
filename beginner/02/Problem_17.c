#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int t, s;
    scanf("%d %d", &t, &s);
    double total = 60 * 2.33 * s;
    t -= 120;
    total += t * 1.66 * s;
    printf("%.1f", total);
    return 0;
}