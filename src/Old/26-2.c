// int * const ptr1 로 선언한 경우 참조 변경 불가

#include <stdio.h>
void ShowData(const int *p);

int main(void){
    int num1 = 10;
    int num2 = 20;

    int * const ptr1 = &num1;
    int * const ptr2;

    // ptr2 = &num2;
    // ptr1 = &num2;

    (*ptr1)++;
    ShowData(ptr1);
    return 0;
}

void ShowData(const int *p)
{
    /*
    이 안에서는 p가 가리키는 변수의 값을 바꿀 수 없다.
    */
    printf("%d \n", *p);
}