#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){
   srand(time(NULL));
   int vstup ;
   int count = 0;
   const char*vote[] ={"", "Scissors", "Paper", "Rock"};
   
   while(1) {
       int sum = rand()  % 3 + 1;
       count++;
       
       printf("1 - Scissors\n" "2 - Paper\n" "3 - Rock\n" "Enter your choice: \n"    );
       scanf("%i", &vstup);
       
       if(vstup < 1 || vstup > 4) break;
       
       printf("%s - %s\n", vote[vstup] , vote[sum]);
       if ((vstup -sum) == 0) {
           printf("Draw\n\n");
       } else {
           if ((vstup - sum) == -1 || (vstup - sum) == 2) {
               printf("You won\n\n");
           } else {
               printf("You lose\n\n");
           }
       }

       if (count == 20) break;
   }
   return 0;
}