#include <stdio.h>

int main(){
    unsigned u = 10;
    int i = -20;

    if(u+i>0)
        printf("양수입니다\n");
    else
        printf("음수입니다\n");

    unsigned long val = -1;
    printf("The biggest number: %lu\n", val);


}