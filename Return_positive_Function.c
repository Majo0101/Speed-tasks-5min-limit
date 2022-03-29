#include <stdio.h>

int abs(int a );

int main(){

    int a = 0;

    printf("Enter number a\n");
    scanf("%i", &a);

    printf("%d" , abs(a));
    return 0;

}

int abs(int a ){
    signed int tuc = a;
    return tuc;
}
