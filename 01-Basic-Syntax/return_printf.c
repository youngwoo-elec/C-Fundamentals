#include <stdio.h>

int main(){
    int cnt_s, cnt_p;
    double a, b, c;
    printf("a b c:");
    cnt_s = scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf %lf %lf\n", a, b, c);
    printf("cnt_s: %d\n", cnt_s);
    cnt_p = printf("abc\n abc");
    printf("\ncnt_p: %d\n", cnt_p);
}