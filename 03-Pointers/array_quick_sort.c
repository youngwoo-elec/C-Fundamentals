#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10

void swap(int *a, int *b);
int partition(int arr[], int low, int high);
void quicksort(int arr[], int low, int high);

int main(){
    int arr[ARR_SIZE];
    int size = sizeof(arr)/sizeof(arr[0]);
    srand(time(NULL));
    for(int i=0;i<ARR_SIZE;++i){
        arr[i] = rand()%50+1;
    }
    quicksort(arr,0,size-1);

    for(int i=0;i<ARR_SIZE;++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot&&i<high)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<j)
            swap(&arr[i],&arr[j]);
    }
    swap(&arr[low],&arr[j]);
    return j;
}

void quicksort(int arr[],int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr, low, pi-1);
        quicksort(arr,pi+1,high);
    }
}