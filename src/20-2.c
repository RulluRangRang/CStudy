// P.482 - array parameter change
#include <stdio.h>

void IncreArrElm(int arg[]);
void ArrPrintf(int arg[]);

int main(void)
{
    int arr[3] = {1, 2, 3};
    printf("*** 증가 이전 배열정보 출력 *** \n");
    ArrPrintf(arr);

    IncreArrElm(arr);
    printf("*** 증가 증가 배열정보 출력 *** \n");
    ArrPrintf(arr);
    return 0;
}

void IncreArrElm(int arg[]){
    for (int i = 0; i<3; i++)
        arg[i] = arg[i] + 1;
}

void ArrPrintf(int arg[]){
    for (int i = 0; i<3; i++)
        printf("%4d", arg[i]);
    printf("\n");
}