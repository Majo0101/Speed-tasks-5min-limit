/*
 Given a year, return the century it is in.
 The first century spans from the year 1 up to and including the year 100,
 the second - from the year 101 up to and including the year 200, etc.
 */

#include <stdio.h>

int solution(int year);

int main(){

    int a = 0;
    printf("Enter year\n");
    scanf("%i",  &a);

    printf("Year %d is %d. century", a , solution(a));
    return 0;
}


int solution(int year) {

    float sum = 0;

    if(year <= 100){
        return 1;
    }

    if(year > 100){

        sum = (float)year / 100;
        year = year / 100;

        if(sum > year){
            return year +1;
        }else{
            return year ;
        }
    }
}