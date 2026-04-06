#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "bubble_sort.h"
#include "quick_sort.h"
void quicksort(int arr[], int low, int high);

#define ARR_SIZE  10000

int main(){
    srand(time(NULL));
    clock_t begin, end;
    double diff;
    int arr1[ARR_SIZE], arr2[ARR_SIZE];
    for(int i=0;i<ARR_SIZE;++i){
        int num = rand()%(90+10);
        arr1[i] = num;
        arr2[i] = num;
    }
    
    begin = clock();
    BubbleSort(arr1,ARR_SIZE);
    end = clock();
    diff = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("Bubble_Sort: %lf초\n", diff);

    begin = clock();
    quicksort(arr2,0,ARR_SIZE-1);
    end = clock();
    diff = (double)(end-begin)/CLOCKS_PER_SEC;
    printf("Quick_Sort: %lf초\n", diff);

    return 0;

}
