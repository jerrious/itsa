#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    char str[10];
    scanf("%s", str);
    char vowel[10] = "aeiouAEIOU";
    if(strchr(vowel, str[0]) != NULL)
        printf("母音");
    else
        printf("子音");
    return 0;
}
