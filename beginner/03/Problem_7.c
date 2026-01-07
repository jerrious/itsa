#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int max = -101;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d", &x);
        if(x > max) max = x;
    }
    printf("%d", max);
    return 0;
}
