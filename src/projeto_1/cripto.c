

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void main(){

    srand(time(NULL));   // Initialization, should only be called once.
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%c", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
    printf("%c", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
    printf("%c", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
    printf("%c", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26]);
}