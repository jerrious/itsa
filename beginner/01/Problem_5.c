#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char input[10];
    scanf("%s", input);
    for(int i = 0; i < 5; i++){
        int num = input[i] - 48;
        for(int j = 0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }

	return 0;
}