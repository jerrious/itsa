#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int mi;
    scanf("%d", &mi);
    double km = mi * 1.6;
    printf("km=%.1f", km);
    return 0;
}