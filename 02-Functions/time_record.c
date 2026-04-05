#include <stdio.h>
#include <time.h>

int main(){
    int a, b;
    long begin, end, diff;
    
    printf("a:  ");
    begin = time(NULL);
    scanf("%d", &a);
    end = time(NULL);

    diff = end - begin;

    printf("%ld\n", diff);

}