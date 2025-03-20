#include <stdio.h>

void swap(int x, int y);
void swap_call_by_address(int *x, int *y);

int main(){
    int x, y;
    x = 200;
    y = 300;

    printf("initial .... \n");
    printf("x = %d, y = %d \n", x, y);
    swap(x, y);
    printf("after swap .... \n");
    printf("x = %d, y = %d \n", x, y);
    swap_call_by_address(&x, &y);
    printf("after call by address .... \n");
    printf("x = %d, y = %d \n", x, y);
    return 0;    
}

void swap(int x, int y){
    // it is not useful because of "call by value"
    // parameter was sending by "copy" so that the original variable will not change.
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_call_by_address(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

