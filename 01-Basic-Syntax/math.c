#include <stdio.h>
#include <math.h>


int main(){
    double ang = (M_PI/20);
    printf("%3s %10s %10s %10s %10s\n","i","x", "Sin x","cos x", "tan x");
    for(int i=0;i<=20;i++){
        double ang_f = ang*i;
        if(fabs(cos(ang_f))<1e-10) //fabs (절댓값): 0과 얼마나 가까운 지 보기 위함  1e-10: 1.0^(-10): 대충 0 정도
            printf("%3d %10.4f %10.4f %10.4f %10s\n",i,ang_f, sin(ang_f), cos(ang_f),"INF");
        else
            printf("%3d %10.4f %10.4f %10.4f %10.4f\n",i,ang_f, sin(ang_f), cos(ang_f),tan(ang_f));
        
    }

    return 0;

}