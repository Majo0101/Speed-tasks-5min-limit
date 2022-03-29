#include <stdio.h>

int power(int res , int pow);

int main(){

    int a = 0;
    int b = 0;

    printf("Enter number a\n");
    scanf("%i", &a);
    printf("Enter powa a\n");
    scanf("%i", &b);

    printf("%d" ,power(a,b) );
    return 0;

}

int power(int res , int pow){

    int a  = 1;

    for (int i = 0; i < pow; i++) {
        a = a * res;
    }
    return a ;
}
