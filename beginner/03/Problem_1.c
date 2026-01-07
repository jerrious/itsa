#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);
    if(t>0) printf("正數");
    else if(t<0) printf("負數");
    else printf("0");
    return 0;
}
