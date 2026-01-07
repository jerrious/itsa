#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    b = a * 60 + b;
    d = c * 60 + d;
    int diff = d - b;
    int total;
    if(diff <= 120) total = diff / 30 * 30;
    else if(diff < 240) total = 120 + (diff - 120) / 30 * 40;
    else total = 280 + (diff - 240) / 30 * 60;
    printf("%d", total);

    return 0;
}