#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char english[5][10] = {"dog", "cat", "duck", "cow", "fox"};
    char chinese[5][10] = {"狗", "貓", "鴨", "牛", "狐"};
    char input[10];
    scanf("%s", input);
    for(int i = 0; i < 5; i++){
        if(strcmp(input, english[i]) == 0){
            printf("%s", chinese[i]);
            break;
        }
        if(strcmp(input, chinese[i]) == 0){
            printf("%s", english[i]);
            break;
        }
    }

	return 0;
}