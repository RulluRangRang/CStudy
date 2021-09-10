// P.485
#include <stdio.h>
void IncreArrElm(int arg[]);
void ArrPrintf(const int arg[]);

int main(void)
{
    int arr[3] = {1, 2, 3};
    printf("*** 증가 이전 배열정보 출력 ***\n");
    ArrPrintf(arr);

    IncreArrElm(arr);
    printf("*** 증가 이후 배열정보 출력 ***\n");
    ArrPrintf(arr);
    return 0;
}

void IncreArrElm(int arg[])
{
    for( int i = 0; i<3; i++)
        arg[i] += 1;
}

void ArrPrintf(const int arg[]){
    for(int i = 0; i<3; i++)
        printf("%4d", arg[i]);
    // arg[i] += 1      // 컴파일 오류
    printf("\n");
}