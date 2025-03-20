#include <stdio.h>

void func_call(void);

int main(){
    int num = 10;
    char ch1 = 'A';
    char ch2 = 'B';
    double value1 = 3.14;
    double value2 = 0.782;

    printf("num = %d, &num = %p \n", num, &num);
    printf("ch1 = %c, &ch1 = %p \n", ch1, &ch1);
    printf("ch2 = %c, &ch2 = %p \n", ch2, &ch2);
    printf("value1 = %.2f, &value1 = %p \n", value1, &value1);
    printf("value2 = %.2f, &value2 = %p \n", value2, &value2);
    printf("===========");

    func_call();
    return 0;
}

void func_call(){
    int num = 10;
    char ch1 = 'A';
    char ch2 = 'B';
    double value1 = 3.14;
    double value2 = 0.782;

    printf("num = %d, &num = %p \n", num, &num);
    printf("ch1 = %c, &ch1 = %p \n", ch1, &ch1);
    printf("ch2 = %c, &ch2 = %p \n", ch2, &ch2);
    printf("value1 = %.2f, &value1 = %p \n", value1, &value1);
    printf("value2 = %.2f, &value2 = %p \n", value2, &value2);
}