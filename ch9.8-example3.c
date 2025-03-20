#include <stdio.h>

int main(){
    int a[] = {0, 1, 2, 3, 4};
    int *p[] = {a+1, a, a+2, a+4, a+3};
    int **pp = p;

    printf("*p[2] = %d \n", *p[2]);
    printf("**p = %d \n", **p);
    printf("*(*(pp+2)+2) = %d \n", *(*(pp+2)+2));

    return 0;    
}