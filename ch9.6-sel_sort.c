#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void list(int size, int *array);
void swap_call_by_address(int *x, int *y);


void list(int size, int array[]){
    for(int i = 0; i<size; i++){
        printf("%5d", array[i]);
        if(((i + 1 ) % 5 == 0)){
            printf("\n");
        }
    }
}

void swap_call_by_address(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void select_sort(int *array){
    int cmp, min;
    for(int i = 0; i < N; i++){
        for(cmp = min = i; cmp < N; cmp++){
            if(array[cmp] < array[min]){
                min = cmp;
            }
        }
        swap_call_by_address(&array[i] ,&array[min]);
    }
}

int main(){
    int array[N];
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        array[i] = rand() % 50 + 1;
    }
    printf("source array ....\n");
    list(N, array);

    printf("sort ....\n");
    select_sort(array);
    list(N, array);

    return 0;    
}




