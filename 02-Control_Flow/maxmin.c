/*
maxmin 프로그램 작성
1. 프로그램에 관한 정보를 출력한다.
2. 정수 값 n을 읽는다.
3. n개의 실수 숫자를 읽는다.
4. 최대값과 최소값을 찾는다.
*/

#include <stdio.h>

float maximum(float x, float y);
float minimum(float x, float y);
void prn_info(void);

int main(){
    prn_info();
    int i, n;
    float max, min, x;
    printf("Input n: ");
    scanf("%d", &n);
    printf("\nInput%d real numbers :" ,n);
    scanf("%f",&x);
    max=min=x;
    for(i=2;i<=n;++i){
        scanf("%f", &x);
        max = maximum(max,x);
        min = minimum(min,x);
    }
    printf("\n%s%11.3f\n%s%11.3f\n\n",
        "Maximum value: ",max,
        "Minimum value: ",min);
    return 0;
}
float maximum(float x, float y){
    if (x>y)
        return x;
    else
        return y;
}

float minimum(float x, float y){
    if (x<y)
        return x;
    else
        return y;
}
void prn_info(){
    printf("\n%s\n%s\n",
        "This program reads an interger value for n, and then",
        "processes n real number to find max and min values");

}