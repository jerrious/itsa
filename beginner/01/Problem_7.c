#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int m;
    scanf("%d", &m);
    if(m == 1){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4-i; j++){
                printf(" ");
            }
            if(!i) printf("*");
            else if(i == 4) {
                for(int k = 0; k < 2*i+1; k++){
                    printf("*");
                }
            }else{
                printf("*");
                for(int k = 0; k < 2*i-1; k++){
                    printf(" ");
                }
                printf("*");
            }
            printf("\n");
        }
    }else if(m == 2){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4-i; j++){
                printf(" ");
            }
            for(int k = 0; k < 2*i+1; k++){
                printf("*");
            }
            printf("\n");
        }
    }else{
        for(int i = 4; i >= 0; i--){
            for(int j = 0; j < 4-i; j++){
                printf(" ");
            }
            for(int k = 0; k < 2*i+1; k++){
                printf("*");
            }
            printf("\n");
        }
    }
	return 0;
}