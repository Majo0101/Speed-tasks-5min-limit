/*
Some phone usage rate may be described as follows:
-first minute of a call costs min1 cents,
-each minute from the 2nd up to 10th (inclusive) costs min2_10 cents
-each minute after 10th costs min11 cents.
You have s cents on your account before the call. What is the duration of the longest call (in minutes rounded down to the nearest integer) you can have?
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(int min1, int min2_10, int min11, int s);

int main(){

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    printf("Price first min\n");
    scanf("%i",  &a);
    printf("Price 2 - 10min\n");
    scanf("%i",  &b);
    printf("Price after 11min\n");
    scanf("%i",  &c);
    printf("Credit\n");
    scanf("%i",  &d);


    printf( "You can talk %d min", solution(a,b,c,d));
    return 0;
}


int solution(int min1, int min2_10, int min11, int s) {

    int minutes = 0;

    while(1){

        minutes++;

        if(minutes == 1){
            s = s -min1;
        }

        if(2 <= minutes && minutes <= 10){
            s = s - min2_10;
        }

        if(minutes > 10){
            s = s - min11;
        }

        if(s < 0){
            minutes = minutes -1;
        }

        if(s <= 0)
            break;
    }

    return minutes;

}
