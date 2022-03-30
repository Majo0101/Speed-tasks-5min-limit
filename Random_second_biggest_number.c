#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int a[10];
    int max = 0;
    int counter = 0;
    srand(time(NULL));

    for (int i = 0; i < 11; i++) {
        a[i] = rand();
        printf("%d  ", a[i]);
    }

    for (int i = 0; i < 10; ++i) {
        if (max < a[i]){
            max = a[i];
            counter = i;
        }
    }

    printf("\nmax max: %d", max);

    max = 0;

    for (int i = 0; i < 11; ++i) {

        if(i == counter){
            continue;
        }
        if (max < a[i]){
            max = a[i];
        }
    }

    printf("\nmax - 1: %d", max);

    return 0;
}