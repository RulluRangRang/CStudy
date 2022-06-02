#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int i;

    arr = (int *)malloc(sizeof(int) * 3);
    printf("arr 참조 주소 : %#x \n", arr);
    for (i = 0; i < 3; i++)
        arr[i] = i;

    arr = (int *)realloc(arr, sizeof(int) * 5); // 메모리 확장
    printf("arr 참조 주소 : %#x \n", arr);
    for (i = 3; i < 5; i++)
        arr[i] = i;

    // 배열에 저장된 값 출력
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    arr = NULL;
    return 0;
}