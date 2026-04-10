#include <stdio.h>
#include <math.h>


int main(){
    double ang = (M_PI/20);
    printf("%3s%10s%10s%10s%10s\n","i","x", "Sin x","cos x", "tan x");
    for(int i=0;i<=20;i++){
        double ang_f = ang*i;
        printf("%3d%10.4f%10.4f%10.4f%10.4f\n",i,ang_f, sin(ang_f), cos(ang_f),tan(ang_f));
        
    }

    return 0;

}