#include <stdio.h>
#include <assert.h>

void t_putchar(void);
void t_assert(void);
void wrt_it(void);


int main(){
    printf("Input a line: ");
    wrt_it();
    printf("\n");
    return 0;
}

void t_putchar(void){
    for(putchar('1');putchar('2');putchar('3')){
        putchar('4');
        continue;
        putchar('5');
    }
}
void t_assert(void){
    int x = 5;
    assert(x==5);
    assert(x==10); //an assertion
}

void wrt_it(void){
    //재귀함수
    int c; //EOF 검사 x → c를 char 형으로 선언해도 됨
    if((c=getchar()) != '\n'){     
        /*
        putchar(c);
        wrt_it();
        *///  → 정방향 인쇄
        wrt_it();
    }
    putchar(c);
    
}