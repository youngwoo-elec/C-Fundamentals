#include <stdio.h>

int main() {
    int command;

    do {
        printf("\n[SYSTEM] 시스템을 가동하시겠습니까?\n");
        printf("가동하려면 (1), 대기하려면 (0)을 입력하십시오: ");
        
        // 일단 입력을 받습니다 (최소 1회 실행)
        scanf("%d", &command);

        if (command != 1) {
            printf(">> 경고: 잘못된 입력입니다.\n");
        }

    } while (command != 1); // command가 1이 아닐 동안 가차 없이 반복

    printf("\n[SYSTEM] 엔진 점화... 가동을 시작합니다!\n");

    return 0;
}