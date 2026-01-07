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
        if(x >= 90) printf("優等\n");
        else if(x >= 80) printf("甲等\n");
        else if(x >= 70) printf("乙等\n");
        else if(x >= 60) printf("丙等\n");
        else printf("不及格\n");
    }
    return 0;
}
