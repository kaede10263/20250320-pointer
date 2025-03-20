#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chapter_8_insert_sort(void);
void main_10_1(void);
void main_10_2(void);

// chapter_8_insert_sort
void display(int *arr){
    for(int i = 1; i < 20; i++){
        printf("%5d ", arr[i]);
        if((i%5) == 0){
            printf("\n");
        }
    }
}
void chapter_8_insert_sort(){
    int arr[21];
    int i, j, tmp;
    srand(time(NULL));
    for(int i = 0; i < 21; i++){
        arr[i] = rand() % 100 + 1;
    }

    printf("original matrix ... \n");
    arr[0] = -1;
    display(arr);
    printf("\n");
    printf("insert sorting .... \n"); 

    for(i = 2; i < 20; i++){
        tmp = arr[i];
        for(j = i; arr[j-1] >= tmp; j--){
            arr[j] = arr[j-1];
        }
        arr[j] = tmp;
    }
    display(arr);
}

// 10-1
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void insert_sort(int *arr){
    int i, j, tmp;
    for(i = 2; i < 20; i++){
        tmp = arr[i];
        for(j = i; arr[j-1] >= tmp; j--){
            swap(&arr[j], &arr[j-1]);
        }
        arr[j] = tmp;
    }
}
void main_10_1(){    
    int arr[21];
    int i, j, tmp;
    srand(time(NULL));
    for(int i = 0; i < 21; i++){
        arr[i] = rand() % 100 + 1;
    }

    printf("original matrix ... \n");
    arr[0] = -1;
    display(arr);
    printf("\n");
    printf("insert sorting .... \n"); 

    insert_sort(arr);    
    display(arr);
}
// 10-2
void list(int (*arr)[3], int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", arr[i][j]);
        }  
        printf("\n");      
    }
}
void add(int (*arr)[3], int row, int column){   // sum_2x should be point of int
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            arr[i][j]++;
        }        
    }
}
void main_10_2(){
    int row = 3;
    int column = 3;
    int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};   // int (*)[3]  => pointer to an array of 3 int
    printf("original ... \n");
    list(arr, row, column);

    printf("after add ... \n");
    add(arr, row, column);
    list(arr, row, column);
}


int main(){
    // chapter_8_insert_sort();
    main_10_1();
    // main_10_2();
    return 0;
}




