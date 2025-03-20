#include <stdio.h>


int main(){
    int num = 168;
    printf("num = %d &num = %p \n", num, &num);

    int *ptr_numa;
    ptr_numa = &num;
    printf("*ptr_num = %d \n", *ptr_numa);
    printf("ptr_num = %p \n", ptr_numa);
    printf("&ptr_num = %p \n", &ptr_numa);
    printf("================\n");
    
    int *ptr_num = &num;
    printf("*ptr_num = %d \n", *ptr_num);
    printf("ptr_num = %p \n", ptr_num);
    printf("&ptr_num = %p \n", &ptr_num);
    printf("================\n");

    *ptr_num = 158;
    printf("*ptr_num = %d \n", *ptr_num);
    printf("ptr_num = %p \n", ptr_num);
    printf("&ptr_num = %p \n", &ptr_num);
    return 0;
}




