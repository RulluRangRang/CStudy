// const int *  ptr1 로 선언한 경우 포인터를 이용하여 값 변경 불가

#include <stdio.h>
void ShowData(const int *p);

int main(void)
{
    int num1 = 10;
    int num2 = 20;
    const int *ptr = &num1;

    // (*ptr)++;        // 컴파일 에러 발생
    num1++;

    ShowData(&num1);

    ptr = &num2;
    ShowData(ptr);
    return 0;
}

void ShowData(const int *p)
{
    /*
    이 안에서는 p가 가리키는 변수의 값을 바꿀 수 없다.
    */
    printf("%d \n", *p);
}