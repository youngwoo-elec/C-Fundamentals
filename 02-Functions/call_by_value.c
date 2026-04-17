#include <stdio.h>

int compute_sum(int n);

int main(){
    int sum, n=3;
    printf("%d\n", n);      //3
    sum = compute_sum(n);
    printf("%d\n", n);      //3
    printf("%d\n", sum);    //6
}

int compute_sum(int n){
    int sum =0;
    for(;n>0;--n)
        sum += n;
    return sum;
}