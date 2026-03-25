#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *ifp;
    char buffer[100];

    // "w" 모드: 쓰기 전용. 파일이 없으면 만들고, 있으면 내용을 지우고 새로 씀.
    ifp = fopen("test.txt", "w"); // 파일 열기 실패 시 NULL 포인터

    if (ifp == NULL) { // 파일 열기 실패 시 예외 처리 (필수!)
        printf("파일을 열 수 없습니다.\n");
        exit(1); //stdlib에 있음
        //return 1;
    }

    fprintf(ifp, "KNU Electronics Engineering\n"); // 파일에 쓰기
    fprintf(ifp, "Military Service: Sep 2026 Discharge\n");

    fclose(ifp); // 파일 닫기 (메모리 누수 방지 및 저장 확정)
    printf("파일 쓰기 완료.\n\n");


    // --- [ STEP 2: 파일 읽기 (Read) ] ---
    // "r" 모드: 읽기 전용. 파일이 없으면 NULL 반환.
    ifp = fopen("test.txt", "r");

    if (ifp == NULL) {
        printf("파일이 존재하지 않습니다.\n");
        return 1;
    }

    printf("--- 파일 내용 출력 ---\n");
    // fgets: 한 줄씩 읽어서 buffer에 저장
    while (fgets(buffer, sizeof(buffer), ifp) != NULL) {
        printf("%s", buffer);
    }

    fclose(ifp); // 읽기가 끝나면 반드시 닫기
    printf("----------------------\n");

    return 0;
}