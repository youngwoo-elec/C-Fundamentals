#include <stdio.h>


void t_putchar(){
    for(putchar('1');putchar('2');putchar('3')){
        putchar('4');
    }
}


int main(){
    t_putchar();

    return 0;
}