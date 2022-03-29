#include <stdio.h>

int fakt (int a);

int main(){

    int a = 0;

    printf("Enter a\n");
    scanf("%i", &a);

    printf("%d" ,fakt(a));
    return 0;

}

int fakt (int a){

    long factorial = 1;

    for (int i = 1; i <= a; ++i) {
        factorial *= i;
    }

    return factorial;
}
