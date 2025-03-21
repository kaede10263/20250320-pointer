#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// https://hackmd.io/@5MuUF36LSkOHlFSsow8mjA/B1FQdZCrv

int fun(int x){
    int count = 0;
    while(x){
        count++;
        x = x & (x-1);
    }
    return count;
} 

void ex1(){
    printf("%d \n", fun(456));    
}





int main(){
    ex1();

    return 0;
}




