/*
Given an integer n, return the largest number that contains exactly n digits.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(int n);

int main(){

    int a = 0;
    printf("Enter integer\n");
    scanf("%i",  &a);

    printf("Largest integer is %d", solution(a));
    return 0;
}


int solution(int n) {

    char arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = '1';
    }

    int result = atoi(arr);

    return result*9;

}