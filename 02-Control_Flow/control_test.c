#include <stdio.h>


void if_test(){
    /*
    if(expr)
        statement
    */
    int a = 1;
    int b = 2;
    if(a == 2){
        b = 3;
    }
    printf("%d\n", b);
}

void if_else_test(){
    /*
    if(expr)
        statement1
    else/else if
        statement2
    */
    int a = 1;
    int b = 2;
    if(a == 2){
        b = 3;
    }
    else if(a == 1)
        b = 2;
    printf("%d\n", b);
}

void while_test(){
    /*
    while(expr)
        statment
    expr의 값이 거짓일 때까지 루프
    */
    int i = 1;
    int sum;
    while(i<=5){
        sum += i;
        ++i;
    }
    printf("%d\n",sum);
}

voidcd for_test(){
    /*
    for(expr1; expr2; expr3)  -------> expr1: 초기화 배경 설정 / expr2: 검사 / expr3: 저장된 값을 증가
        statement                                                               ㄴexpr3이 루프의 몸체에서 마지막으로 수행
            ==
    expr1;
    while(expr2){
        statement
        expr3;
    }    
    */
    int sum;
    for(int i=1;i<=5;++i){
        sum += i;
    }
    printf("%d\n",sum);
}


int main(){
    if_test();
    if_else_test();
    while_test();
    for_test();
    return 0;
}