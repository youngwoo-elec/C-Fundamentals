#include <stdio.h>
#define CLASS_SIZE 5

int main(){
    int i, j, score[CLASS_SIZE], sum =0, tmp;
    printf("Input %d scores:", CLASS_SIZE);
    for(i=0;i<CLASS_SIZE;i++){
        scanf("%d",&score[i]);
        sum += score[i];
    }
    
    //버블 정렬
    for(i=0;i<CLASS_SIZE-1;i++){
        for(j=CLASS_SIZE-1;j>i;--j){
            if(score[j-1]<score[j]){
                tmp=score[j-1];
                score[j-1]=score[j];
                score[j]=tmp;
            }
        }
    }
    printf("\nOrdered scores: \n");
    for(i=0;i<CLASS_SIZE;++i){
        printf("    score[%d] =  %d\n", i,score[i]);
    }
    printf("%18d%s\n%18.1f%s\n",
        sum," is the sum of all the scores",
        (double)sum/CLASS_SIZE," is the class avarage");
    
    return 0;
}