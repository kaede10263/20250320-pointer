#include <stdio.h>
#define SIZE 10

void list(int size, int *array);
void add_20(int size, int *array);
void minus_1(int size, int *array);
int sum(int size, int *array);

void list(int size, int array[]){
    for(int i = 0; i<size; i++){
        printf("%5d", array[i]);
        if(((i + 1 ) % 5 == 0)){
            printf("\n");
        }
    }
}

void add_20(int size, int *array){
    for(int i = 0; i<size; i++){
        *(array + i) += 20;
    }
}
void minus_1(int size, int *array){
    for(int i = 0; i<size; i++){
        *(array + i) -= 1;
    }
}
int sum(int size, int *array){
    int total = 0;
    for(int i = 0; i<size; i++){
        total += *(array + i);
    }
    return total;
}



int main(){
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("source array ....\n");
    list(SIZE, array);

    add_20(SIZE, array);
    printf("add 20 ...\n");
    list(SIZE, array);

    minus_1(SIZE, array);
    printf("minus 1 ...\n");
    list(SIZE, array);

    printf("\nsum ...%d \n", sum(SIZE, array));
    return 0;    
}




