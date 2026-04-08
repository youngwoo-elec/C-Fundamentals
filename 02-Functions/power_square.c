#include <stdio.h>
#include <math.h>

int main(){
    double x;

    printf("\n%s%s%s",
        "The following will be computed: \n",
        "\tthe square root of x\n",
        "\tx raised to the power x\n");
    while(1){
        printf("Input x:");
        if(scanf("%lf", &x) != 1)
            break;
        if(x>=0.0)
            printf("\n%15s%22.15e\n%15s%22.15e\n%15s%22.15e\n",
            "x= ", x,
            "sqrt(x)= ", sqrt(x),
            "pow(x,x)= ", pow(x,x));
        else{
            printf("\nSorry, your number must be nonnegative.\n");
            break;
        }
    }
    printf("\nBye!\n");
    return 0;
}