#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);
    printf("%d days\n", t / 86400);
    t %= 86400;
    printf("%d hours\n", t / 3600);
    t %= 3600;
    printf("%d minutes\n", t / 60);
    t %= 60;
    printf("%d seconds", t);
    return 0;
}
