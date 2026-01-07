#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int w, h;
    scanf("%d %d", &w, &h);
    double bmi = (double)w / ((double)h/100 * (double)h/100);
    bmi = round(bmi*100)/100;
    printf("%.2f", bmi);
    
    return 0;
}