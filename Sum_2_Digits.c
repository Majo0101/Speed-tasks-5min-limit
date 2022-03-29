/*
You are given a two-digit integer n. Return the sum of its digits.
 */

#include <stdio.h>

int solution(int n);

int main(){

    int a = 0;
    printf("Enter number\n");
    scanf("%i",  &a);

    printf("Sum of 2 digits is %d", solution(a));
    return 0;
}


int solution(int n) {

    int a = n/10;
    int b = n-(a*10);

    return  a+b;

}