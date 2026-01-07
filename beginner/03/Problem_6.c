#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d", &x);
        if(x >= 50 && x <= 70) printf("%d\n", x);
        else printf("100\n");
    }
    return 0;
}
