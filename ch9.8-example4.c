#include <stdio.h>

int main(){
    int a[][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*p)[3] = a;   // p => pointer to an array of 3 ints
    int b[] = {100, 200, 300};
    int *q[3] = {b, b+1, b+2};  // q => array of 3 pointers to int 

    printf("p = %p\n", p);
    printf("p[0] = %p\n", p[0]);
    printf("*p = %p\n", *p);
    printf("a = %p\n", a);
    printf("*a = %p\n", *a);
    printf("&a[0][0] = %p\n\n", &a[0][0]);

    printf("p[0][0] = %d\n", p[0][0]);
    printf("p[0][2] = %d\n", p[0][2]);
    printf("*p[0] = %d\n", *p[0]);
    printf("(*p)[0] = %d\n", (*p)[0]);
    p++;
    printf("*p[0] = %d\n\n", *p[0]);

    printf("**q = %d \n", **q);
    printf("*q[1] = %d \n", *q[1]);

    return 0;    
}




