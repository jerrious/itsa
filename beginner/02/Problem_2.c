#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int t, b, h;
    scanf("%d %d %d", &t, &b, &h);
    double area = (t + b) * h * 0.5;
    printf("Trapezoid area:%.1f", area);

    return 0;
}