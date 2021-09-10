// P.484
#include <stdio.h>
int AddFunction(const int n1, const int n2);

int main(void)
{
    printf("1과 2의 합 : %d \n", AddFunction(1, 2));
    printf("2과 4의 합 : %d \n", AddFunction(2, 4));
    printf("3과 6의 합 : %d \n", AddFunction(3, 6));
    return 0;
}

int AddFunction(const int n1, const int n2)
{
    // n1++;    // 컴파일 오류 발생 위치
    // n2++;    // 컴파일 오류 발생 위치
    return n1 + n2;
}