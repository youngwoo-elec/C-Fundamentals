#include <stdio.h>

int main() {
    int sensor1, sensor2;

    for (sensor1 = 0; sensor1 < 10; sensor1++) {
        for (sensor2 = 0; sensor2 < 10; sensor2++) {
            
            printf("Checking sensors... [%d, %d]\n", sensor1, sensor2);

            //가상의 에러
            if (sensor1 == 2 && sensor2 == 5) {
                printf("\n!ERROR 발생!\n");
                goto error; // 레이블이 붙은 문장으로 분기
            }
        }
    }

    printf("All sensors are normal.\n");
    return 0; // 정상 종료

error: //레이블 (세미콜론 아님에 주의)
    printf("시스템을 종료하겠습니다.\n");
    
    return -1; // 에러 종료
}