#include <stdio.h>
#include <stdlib.h>

void checa(int n, int nums[]){
    int pos[7];
    int count = 0;
	for(int i=0; i<7; i++){
		if(n == nums[i]){
			pos[count] = i;
            count++;
		}
	}
	if(count == 0){
        printf("O numero %d nao esta presente!", n);
    }else{
        printf("O numero %d esta presente nas seguintes posicoes:\n", n);
        for(int i=0; i<count; i++){
            printf("%d ", pos[i]);
        }
    }
}

int main(){
    int nums[7];
    int n;
    for(int i=0; i<7; i++){
        scanf("%d", &nums[i]);
    }
    scanf("%d", &n);
    checa(n, nums);
}