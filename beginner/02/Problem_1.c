#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int m, n;
    scanf("%d %d", &m, &n);
    double area = m * n * 0.5;
    printf("Triangle area:%.1f", area);

    return 0;
}