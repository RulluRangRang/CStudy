// P.432
#include <stdio.h>

int main(void){
    printf("AA0BB0CC");
    printf("|");
    printf("AA\0BB\0CC");
    printf("\0AA");
    printf("|");
    return 0;
}