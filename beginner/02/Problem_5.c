#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d-%d=%d\n", a, b, a-b);
    if(a<0 && b>0) printf("%d/%d=%d...%d\n", a, b, a/b - 1, abs(a%b));
    else if(a<0 && b<0) printf("%d/%d=%d...%d\n", a, b, a/b + 1, a%b - b);
    else printf("%d/%d=%d...%d\n", a, b, a/b, a%b);
    return 0;
}