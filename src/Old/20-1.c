// P.481
#include <stdio.h>
void ArrPrintf(int []);

int main(void){
    int arr[3] = {1,2,3};
    ArrPrintf(arr);
    return 0;
}

void ArrPrintf(int arg[])
{
    int i; 
    for(i = 0; i< 3; i++)
        printf("%4d", arg[i]);
    printf("\n");
}