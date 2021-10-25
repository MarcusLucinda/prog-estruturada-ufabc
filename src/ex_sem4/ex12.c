#include <stdio.h>
#include <stdlib.h>

void conta(int count, int num){
    if(count == num){
        printf("%d", num);
        return;
    }
    printf("%d ", count);
    count++;
    conta(count, num);
}

int main(){
    int num;
    scanf("%d", &num);
    conta(0, num);
}