#include <stdio.h>
#include <stdlib.h>

int fib(int i){
    if(i <=1){
        return i;
    }
    return(fib(i-1) + fib(i-2));
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d ", fib(i));
    }
}