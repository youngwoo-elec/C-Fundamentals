#include  <stdio.h>
#include "Add.h"

int main(){
    int a, b;
    printf("a b:");
    scanf("%d %d", &a, &b);
    printf("%d\n", add(a,b));
    return 0;
}