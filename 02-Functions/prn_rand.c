#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n;
    printf("\n%s\n%s",
        "Some randomly distuibuted integers will be printed.",
        "How many do you want to see?   ");
    scanf("%d", &n);
    for(i=0;i<n;++i){
        if(i%8==0)
            putchar('\n');
        printf("%7d ", rand());
    }
    printf("\n");
    return 0;
}