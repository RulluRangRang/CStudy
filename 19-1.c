// P.447 - 2차원 배열
#include <stdio.h>
int SeatAssign(int v, int h);
int seats[25];

int main(void)
{
    int vLine, hLine; // 세로, 가로 라인

    while (1)
    {
        printf("할당할 좌석의 세로, 가로 위치 입력: ");
        scanf("%d %d", &vLine, &hLine);
        if (vLine <= 0 || hLine <= 0)
            break;

        if (SeatAssign(vLine, hLine) == -1)
            printf("이미 할당된 자리입니다.\n");
        else
            printf("할당이 완료되었습니다.\n");
    }
    printf("사용해 주셔서 감사합니다ㅏ.\n");
    return 0;
}

int SeatAssign(int v, int h)
{
    if (seats[5 * (v - 1) + (h - 1)])   // 이미 할당된 자리라면
        return -1;
    seats[5 * (v - 1) + (h - 1)] = 1;   // 사용중인 자리임을 표시
    return 1;
}