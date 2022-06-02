// P.463
#include <stdio.h>
#define ARR_ONE arr[0]
#define ARR_TWO arr[1]

int main(void)
{
    int arr[2][2];
    ARR_ONE[0] = 10, ARR_ONE[1] = 20;
    ARR_TWO[0] = 12, ARR_TWO[1] = 24;

    printf("%d %d \n", ARR_ONE[0], ARR_ONE[1]);
    printf("%d %d \n", ARR_TWO[0], ARR_TWO[1]);
    return 0;
}