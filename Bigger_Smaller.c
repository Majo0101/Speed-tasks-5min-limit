#include <stdio.h>

int por (int a , int b);

int main(){

    int a = 0;
    int b = 0;

    char * pole[] = {"Equal", "Bigger","Smaller" };

    printf("Enter a\n");
    scanf("%i", &a);
    printf("Enter b\n");
    scanf("%i", &b);

    printf("A number is  %s than B", pole[por(a,b)]);

    return 0;

}

int por (int a , int b){

    if(a != b){
        return (a > b) ? 1 : 2;
    }else{
        return 0;
    }
}