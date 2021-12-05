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
        printf("Well Done!");
        correct = 1;
    }else{
        printf("Wrong guess; better luck next time!\n");
    }
   }while(!correct);

   return 0;
}
