#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int m;
    scanf("%d", &m);
    if(!m) printf("*****\n*   *\n*   *\n*   *\n*****");
    else if(m == 1) printf("    *\n    *\n    *\n    *\n    *");
    else if(m == 2) printf("*****\n    *\n*****\n*    \n*****");
    else if(m == 3) printf("*****\n    *\n*****\n    *\n*****");
    else if(m == 4) printf("*   *\n*   *\n*****\n    *\n    *");
    else if(m == 5) printf("*****\n*    \n*****\n    *\n*****");
    else if(m == 6) printf("*    \n*    \n*****\n*   *\n*****");
    else if(m == 7) printf("*****\n    *\n    *\n    *\n    *");
    else if(m == 8) printf("*****\n*   *\n*****\n*   *\n*****");
    else if(m == 9) printf("*****\n*   *\n*****\n    *\n    *");
	return 0;
}