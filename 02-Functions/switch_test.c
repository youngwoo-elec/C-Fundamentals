#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define     COUNT   20

int main(){

    srand(time(NULL));
    int value;
    int cnt_1 =0, cnt_2 =0, cnt_3 =0, cnt_4 =0,
        cnt_5 =0, cnt_6 =0, cnt_7 =0, cnt_other =0;
    int i=0;
    while(1){
        value = rand()%(10+1);
        i++;
        
        switch(value){
            case 1:
                ++cnt_1;
                break;
            case 2:
                ++cnt_2;
                break;
            case 3:
                ++cnt_3;
                break;
            case 4:
                ++cnt_4;
                break;
            case 5:
                ++cnt_5;
                break;
            case 6:
                ++cnt_6;
                break;
            case 7:
                ++cnt_7;
            default:
                ++cnt_other;

        }
                if(i>=COUNT)
            break;
        
    }


    printf("cnt_1: %d   ", cnt_1);
    printf("cnt_2: %d   ", cnt_2);
    printf("cnt_3: %d   ", cnt_3);
    printf("cnt_4: %d\n", cnt_4);
    printf("cnt_5: %d   ", cnt_5);
    printf("cnt_6: %d   ", cnt_6);
    printf("cnt_7: %d   ", cnt_7);
    printf("cnt_other: %d\n", cnt_other);
}