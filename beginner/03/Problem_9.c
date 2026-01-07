#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(n >= 3 && n <= 5) printf("Spring");
    else if(n >= 6 && n <= 8) printf("Summer");
    else if(n >= 9 && n <= 11) printf("Autumn");
    else printf("Winter");
    return 0;
}
