#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x, total=1;
        scanf("%d", &x);
        if(x > 31) printf("Value of more than 31\n");
        else{
            for(int j = 1; j <= x; j++){
                total *= 2;
            }
            printf("%d\n", total);
        }
    }
    return 0;
}