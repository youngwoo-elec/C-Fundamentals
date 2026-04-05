#include "bubble_sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

void swap(int *a, int *b);
void BubbleSort(int arr[], int n);
int main(){
    int arr[ARR_SIZE];
    int size = sizeof(arr)/sizeof(arr[0]);
    srand(time(NULL));
    for(int i=0;i<ARR_SIZE;++i){
        arr[i] = rand()%50+1;
    }
    for(int i=0;i<ARR_SIZE;++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if (arr[j-1]>arr[j])
                swap(&arr[j-1],&arr[j]);
        }
    }
}

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}