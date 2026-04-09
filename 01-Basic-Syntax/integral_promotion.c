#include <stdio.h>

int main(){
    char c = 'A';
    short s1 = 5, s2 = 6;
    printf("%c\n",c);
    printf("size of c: %zu\n", sizeof(c));
    printf("size of c+c: %zu\n", sizeof(c+c));
    printf("size of s1: %zu\n",sizeof(s1));
    printf("size of s2: %zu\n", sizeof(s2));
    printf("size of s1+s2: %zu\n", sizeof(s1+s2));

    return 0;


}