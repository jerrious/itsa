#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(n <= 800) printf("%.1f", round(n*0.9*10)/10);
    else if(n < 1500) printf("%.1f", round(n*0.9*0.9*10)/10);
    else printf("%.1f", round(n*0.9*0.79*10)/10);
    return 0;
}