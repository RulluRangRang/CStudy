// P.452
#include <stdio.h>
int SeatAssign(int v, int h);
int seats[5][5];

int main(void)
{
    int vLine;  // 세로 라인
    int hLine;

    while(1){
        printf("할당할 좌석의 세로, 가로 위치 입력: ");
        scanf("%d %d", &vLine, &hLine);
        if(hLine <=0 || vLine <=0)
            break;

        if(SeatAssign(vLine, hLine) == -1)
            printf("이미 할당된 자리입니다. \n\n");
        else
            printf("할당이 완료되었습니다. \n\n");
    }
    printf("사용해 주셔서 감사합니다. \n\n");
    return 0;
}

int SeatAssign(int v, int h){
    if(seats[v-1][h-1]) // 이미 할당된 자리면
        return -1;

    seats[v-1][h-1] = 1;
    return 1;
}