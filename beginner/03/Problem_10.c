#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(!(n%400)) printf("Bissextile Year");
    else if(!(n%100)) printf("Common Year");
    else if(!(n%4)) printf("Bissextile Year");
    else printf("Common Year");
    return 0;
}
