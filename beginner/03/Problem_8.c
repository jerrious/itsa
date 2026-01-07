#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if(n == 1) printf("Person");
    else if(n == 2) printf("Fairy");
    else printf("Dwarf");
    return 0;
}
