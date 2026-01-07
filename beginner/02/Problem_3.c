#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        double w;
        scanf("%lf", &w);
        double area = w * w * 10;
        printf("%.1lf\n", round(area)/10);
    }
    return 0;
}