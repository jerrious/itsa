#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(n >= 100) printf("%d", 70*n);
    else if(n >= 30) printf("%d", 80*n);
    else if(n >= 10) printf("%d", 90*n);
    else printf("%d", 100*n);
    return 0;
}
