#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int x;
    int i;
    srand(time(NULL));

    for (i=0; i < 50; i++){
    x = 5 + rand() % 5;
    printf("%d ", x);
    }

    return 0;
}