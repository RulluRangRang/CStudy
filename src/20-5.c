// P. 487 - 동적으로 배열길이 계산 후 출력
#include <stdio.h>
void IncreArrElm(int arg[], const int len);
void ArrPrintf(const int arg[], const int len);

int main(void)
{
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {1, 2, 3, 4, 5};

    printf("*** 증가 이전 배열정보 출력 *** \n");
    ArrPrintf(arr1, sizeof(arr1) / sizeof(int));
    ArrPrintf(arr2, sizeof(arr2) / sizeof(int));

    IncreArrElm(arr1, sizeof(arr1) / sizeof(int));
    IncreArrElm(arr2, sizeof(arr2) / sizeof(int));

    printf("*** 증가 이후 배열정보 출력 *** \n");
    ArrPrintf(arr1, sizeof(arr1) / sizeof(int));
    ArrPrintf(arr2, sizeof(arr2) / sizeof(int));
    return 0;
}

void IncreArrElm(int arg[], const int len)
{
    for (int i = 0; i < len; i++)
        arg[i] += 1;
}

void ArrPrintf(const int arg[], const int len)
{
    for(int i = 0; i< len; i++)
        printf("%4d", arg[i]);
    printf("\n");
}