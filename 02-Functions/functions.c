#include <stdio.h>
#include <assert.h>

void t_putchar(void);
void t_assert(void);


int main(){
    t_assert();

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
    assert(x==10);
}