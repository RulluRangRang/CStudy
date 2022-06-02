// P.450
#include <stdio.h>

int main(void)
{
    int arr[3][3];
    int i, j;
    // 3 BY 3 단위 행렬 구성
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}