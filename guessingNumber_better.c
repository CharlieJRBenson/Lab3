#include <stdio.h>
#define MIN 1
#define MAX 10
int main() {
    int rand(void);
   static int rndNo;
   static int userGuess;
   static int correct = 0;

   // rndNo stores integer between MIN and MAX:
   // By using Modulus of MAX then +MIN
   rndNo = rand() % MAX +MIN;

   printf("Please guess the random number:\n");
   do{
    scanf("%d", &userGuess);
    if(userGuess == rndNo){
        printf("Well Done!\n");
        correct = 1;
    }else{
        if(userGuess < rndNo){
            printf("The correct number is bigger\n");
        }else{
            printf("The correct number is smaller\n");
        }

    }
   }while(!correct);

   return 0;
}
