// P.460
#include <stdio.h>
int main(void){
    int arr[3][4];
    printf("배열의 시작주소 : %d \n", arr);
    printf("1행의 시작주소 : %d \n", arr[0]);
    printf("2행의 시작주소 : %d \n", arr[1]);
    printf("3행의 시작주소 : %d \n", arr[2]);
    return 0;
}