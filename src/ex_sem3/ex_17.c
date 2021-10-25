#include <stdio.h>
#include <stdlib.h>


int main(){
    int nums[7];
    int maior;
    int segundo;
    for(int i=0; i<7; i++){
        scanf("%d", &nums[i]);
    }
    if(nums[0] > nums[1]){
        maior = nums[0];
        segundo = nums[1];
    }else{
        maior = nums[1];
        segundo = nums[0];
    }

    for (int i=2; i<7; i++){
        if(nums[i] >= maior){
            segundo = maior;
            maior = nums[i];
        }else if(nums[i] < maior && nums[i] > segundo){
            segundo = nums[i];
        }
    }

    printf("%d", segundo);


}