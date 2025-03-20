#include <stdio.h>


int main(){
    int a[] = {11, 22, 33, 44, 55};
    int *ptr = a;

    printf("ptr[0] = %d \n", ptr[0]);
    printf("ptr[-1] = %d \n", ptr[-1]);
    printf("ptr[1] = %d \n\n", ptr[1]);

    ptr = a + 1;
    printf("ptr[0] = %d \n", ptr[0]);
    printf("ptr[-1] = %d \n", ptr[-1]);
    printf("ptr[1] = %d \n\n", ptr[1]);
    return 0;    
}



