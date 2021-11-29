#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int nums[5];
    for(int i=0; i<5; i++){
        scanf("%d", &nums[i]);
    }
    int *p = nums;
    for(int i=0; i<5; i++){
        printf("%d\n", (2 * *(p+i)));
    }

}