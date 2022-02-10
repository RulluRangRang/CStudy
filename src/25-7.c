#include <stdio.h>
#include <stdlib.h>
char *ReadString(void);
int *ReadInteger(void);

int main(void)
{
    char *strPtr;
    int *numPtr;

    strPtr = ReadString();
    numPtr = ReadInteger();

    if (strPtr != NULL)
        printf("읽어 들인 문자열 : %s \n", strPtr);
    if (numPtr != NULL)
        printf("읽어 들인 정수 :  %d \n", *numPtr);

    free(strPtr);
    strPtr = NULL;
    free(numPtr);
    numPtr = NULL;

    return 0;
}

char *ReadString(void)
{
    char *sPtr = (char *)malloc(sizeof(char) * 20);
    if (sPtr == NULL)
        return NULL;

    printf("문자열 입력 : ");
    scanf("%s", sPtr);
    return sPtr;
}

int *ReadInteger(void)
{
    int *iPtr = (int *)malloc(sizeof(int));
    if (iPtr == NULL)
        return NULL;

    printf("정수 입력 : ");
    scanf("%d", iPtr);
    return iPtr;
}