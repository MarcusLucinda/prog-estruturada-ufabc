#include <stdio.h>
#include <stdlib.h>

int checa(int n, int array[], int in){
	for(int i=0; i<7; i++){
		if(n == array[i] && i != in){
			return 1;
		}
	}
	return 0;
}

int main(){
    int nums[7];


    for(int i=0; i<7; i++){
        scanf("%d", &nums[i]);
    }

    for(int i=0; i<7; i++){
        if(checa(nums[i], nums, i) == 0){
            printf("%d ", nums[i]);
        }
    }
    
}