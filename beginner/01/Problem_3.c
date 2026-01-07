#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char num[4];
    scanf("%s", num);
    printf("%c,%c,%c,%c", num[3], num[2], num[1], num[0]);

	return 0;
}