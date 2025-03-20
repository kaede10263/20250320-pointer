#include <stdio.h>

void main_9_1(void);
void main_9_2(void);
void main_9_3(void);
void main_9_4(void);
void main_9_5(void);
void main_9_6(void);

// 9-1
void main_9_1(){
    int num = 30;
    int *ptr;
    ptr = &num;

    printf("num = %d \n", num);
    printf("ptr sould get = %d \n", *ptr);  
}
// 9-2
void main_9_2(){
    int num = 30;
    printf("num = %d \n", num);
    int *ptr = &num;
    *ptr += 20;   

    printf("num +20 = %d \n", *ptr);  
}
// 9-3
void main_9_3(){
    int arr[5] = {1, 3, 5, 7, 9};
    int arrLen = 5;
    int *ptr = arr;
    printf("oringal ....");
    for(int i = 0; i < arrLen; i++){
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    printf("x10 ....");

    for(int i = 0; i < arrLen; i++){
        *(ptr + i) *= 10;
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}
// 9-4
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main_9_4(){
    int a = 158;
    int b = 168;
    printf("a = %d , b = %d \n", a, b);
    swap(&a, &b);
    printf("after swap \n");
    printf("a = %d , b = %d \n", a, b);
}
// 9-5
int sum(int *arr, int len){   // sum should be point of int
    int total = 0;
    for(int i = 0; i < len; i++){
        total += arr[i];
    }
    return total; 
}
void main_9_5(){
    int arr[5] = {100, 200, 300, 400, 500};   // array of int
    printf("total is %d \n", sum(arr, 5));
}
// 9-6
int sum_2x(int (*arr)[3], int row, int column){   // sum_2x should be point of int
    int total = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            total += arr[i][j];
        }        
    }
    return total; 
}
void main_9_6(){
    int row = 2;
    int column = 3;
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};   // int (*)[3]  => pointer to an array of 3 int
    printf("total is %d \n", sum_2x(arr, row, column));
}

int main(){
    // main_9_1();
    // main_9_2();
    // main_9_3();
    // main_9_4();
    // main_9_5();
    main_9_6();
    return 0;
}




