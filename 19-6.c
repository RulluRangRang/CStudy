// P.463
#include <stdio.h>

int main(void){
    int arr[2][2];
    arr[0][0] = 10, arr[0][1]=20;
    arr[1][0] = 20, arr[1][1]=24;

    printf("%d %d\n", arr[0][0], arr[0][1]);
    printf("%d %d\n", arr[1][0], arr[1][1]);

}