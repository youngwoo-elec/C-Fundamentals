#include <stdio.h>

int main(int argc, char *argv[]){
    
    if(argc != 2){
        printf("파일 이름 입력해주세요\n");
        return 1;
    }
    int i;
    double x;
    double avg = 0.0;   //a better average
    double navg;   // a naive average
    double sum = 0.0;
    FILE *fp;
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("파일이 없대요\n");
        return 1;
    }
    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n",
        "Count", "Item", "Average", "Naive avg",
        "-----", "----", "-------", "---------");
    for(i=1;fscanf(fp,"%lf",&x)==1;++i){
        avg += (x-avg) / i;
        sum += x;
        navg = sum/i;
        printf("%5d%17e%17e%17e\n",i,x,avg,navg);      
    }
    fclose(fp);
    return 0;

}