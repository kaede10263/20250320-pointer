#include <stdio.h>

int main(){
    int num = 10;
    int *ptr_num;

    printf("num = %d &num = %p \n", num, &num);
    
    ptr_num = &num;
    printf("*ptr_num = %d \n", *ptr_num);
    printf("ptr_num = %p \n", ptr_num);
    printf("&ptr_num = %p \n", &ptr_num);
    return 0;
}

